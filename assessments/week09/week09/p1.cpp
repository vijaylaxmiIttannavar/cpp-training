#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>
#include <thread>
#include <mutex>

using namespace std;

class User {
private:
    string username;
    string password;

public:
    User() = default;
    User(const string& user, const string& pass) : username(user), password(pass) {}

    string getUsername() const {
        return username;
    }

    bool authenticate(const string& pass) const {
        return password == pass;
    }
};

class UserManager {
private:
    unordered_map<string, User> users;

public:
    void loadUsers(const string& filename) {
        ifstream file(filename);
        string line;
        while (getline(file, line)) {
            stringstream ss(line);
            string username, password;
            getline(ss, username, ':');
            getline(ss, password);
            users[username] = User(username, password);
        }
    }

    void saveUser(const string& username, const string& password, const string& filename) {
        ofstream file(filename, ios::app);
        file << username << ":" << password << endl;
    }

    bool authenticateUser(const string& username, const string& password) const {
        auto it = users.find(username);
        return it != users.end() && it->second.authenticate(password);
    }
};

class CDRRecord {
public:
    string msisdn;
    string operatorBrand;
    string operatorMNC;
    string callType;
    int duration;
    double download;
    double upload;
    string thirdPartyMSISDN;
    string thirdPartyOperatorMNC;

    CDRRecord(const string& msisdn, const string& operatorBrand, const string& operatorMNC,
        const string& callType, int duration, double download, double upload,
        const string& thirdPartyMSISDN, const string& thirdPartyOperatorMNC)
        : msisdn(msisdn), operatorBrand(operatorBrand), operatorMNC(operatorMNC),
        callType(callType), duration(duration), download(download), upload(upload),
        thirdPartyMSISDN(thirdPartyMSISDN), thirdPartyOperatorMNC(thirdPartyOperatorMNC) {}
};

class CDRProcessor {
private:
    vector<CDRRecord> records;

public:
    void parseCDRFile(const string& filename) {
        ifstream file(filename);
        string line;
        while (getline(file, line)) {
            stringstream ss(line);
            string msisdn, operatorBrand, operatorMNC, callType, thirdPartyMSISDN, thirdPartyOperatorMNC;
            int duration;
            double download, upload;

            getline(ss, msisdn, '|');
            getline(ss, operatorBrand, '|');
            getline(ss, operatorMNC, '|');
            getline(ss, callType, '|');
            ss >> duration;
            ss.ignore(1, '|');
            ss >> download;
            ss.ignore(1, '|');
            ss >> upload;
            ss.ignore(1, '|');
            getline(ss, thirdPartyMSISDN, '|');
            getline(ss, thirdPartyOperatorMNC);

            records.emplace_back(msisdn, operatorBrand, operatorMNC, callType, duration, download, upload,
                thirdPartyMSISDN, thirdPartyOperatorMNC);
        }
    }

    void generateCustomerBillingReport() const {
        unordered_map<string, unordered_map<string, double>> customerData;

        for (const auto& record : records) {
            string customerKey = record.msisdn + "|" + record.operatorBrand;

            if (record.callType == "MOC") {
                customerData[customerKey]["Outgoing Voice"] += record.duration;
            }
            else if (record.callType == "MTC") {
                customerData[customerKey]["Incoming Voice"] += record.duration;
            }
            else if (record.callType == "SMS-MO") {
                customerData[customerKey]["Outgoing SMS"] += 1;
            }
            else if (record.callType == "SMS-MT") {
                customerData[customerKey]["Incoming SMS"] += 1;
            }
            else if (record.callType == "GPRS") {
                customerData[customerKey]["Download"] += record.download;
                customerData[customerKey]["Upload"] += record.upload;
            }
        }

        for (const auto& customer : customerData) {
            cout << "# Customer Data Base: " << customer.first << endl;
            for (const auto& service : customer.second) {
                cout << "  " << service.first << ": " << service.second << endl;
            }
            cout << endl;
        }
    }

    void generateInteroperatorBillingReport() const {
        unordered_map<string, unordered_map<string, double>> operatorData;

        for (const auto& record : records) {
            string operatorKey = record.operatorMNC;

            if (record.callType == "MOC") {
                operatorData[operatorKey]["Outgoing Voice"] += record.duration;
            }
            else if (record.callType == "MTC") {
                operatorData[operatorKey]["Incoming Voice"] += record.duration;
            }
            else if (record.callType == "SMS-MO") {
                operatorData[operatorKey]["Outgoing SMS"] += 1;
            }
            else if (record.callType == "SMS-MT") {
                operatorData[operatorKey]["Incoming SMS"] += 1;
            }
            else if (record.callType == "GPRS") {
                operatorData[operatorKey]["Download"] += record.download;
                operatorData[operatorKey]["Upload"] += record.upload;
            }
        }

        for (const auto& op : operatorData) {
            cout << "# Operator Data Base: " << op.first << endl;
            for (const auto& service : op.second) {
                cout << "  " << service.first << ": " << service.second << endl;
            }
            cout << endl;
        }
    }
};

int main() {
    UserManager userManager;
    userManager.loadUsers("users.txt");

    int choice;
    do {
        cout << "\n1. Sign Up\n2. Login\n3. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
        case 1: {
            string username, password;
            cout << "Enter new username: ";
            cin >> username;
            cout << "Enter new password: ";
            cin >> password;
            userManager.saveUser(username, password, "users.txt");
            cout << "Registration successful!" << endl;
            break;
        }
        case 2: {
            string username, password;
            cout << "Enter username: ";
            cin >> username;
            cout << "Enter password: ";
            cin >> password;
            if (userManager.authenticateUser(username, password)) {
                cout << "Login successful!" << endl;

                CDRProcessor processor;
                string filename;
                cout << "Enter CDR file name: ";
                cin >> filename;
                processor.parseCDRFile(filename);

                int billingChoice;
                do {
                    cout << "\n1. Process CDR file\n2. Print/Search for Billing Information\n3. Logout\nChoice: ";
                    cin >> billingChoice;

                    switch (billingChoice) {
                    case 1: {
                        thread customerBillingThread([&]() {
                            processor.generateCustomerBillingReport();
                            });

                        thread interoperatorBillingThread([&]() {
                            processor.generateInteroperatorBillingReport();
                            });

                        customerBillingThread.join();
                        interoperatorBillingThread.join();

                        cout << "Both billing processes completed successfully." << endl;
                        break;
                    }
                    case 2: {
                        int displayChoice;
                        do {
                            cout << "\n1. Customer Billing\n2. Interoperator Settlement Billing\n3. Back\nChoice: ";
                            cin >> displayChoice;

                            switch (displayChoice) {
                            case 1:
                                processor.generateCustomerBillingReport();
                                break;
                            case 2:
                                processor.generateInteroperatorBillingReport();
                                break;
                            case 3:
                                cout << "Returning to main menu..." << endl;
                                break;
                            default:
                                cout << "Invalid choice! Please try again." << endl;
                            }
                        } while (displayChoice != 3);
                        break;
                    }
                    case 3:
                        cout << "Logging out" << endl;
                        break;
                    default:
                        cout << "Invalid choice! Please try again." << endl;
                    }
                } while (billingChoice != 3);
            }
            else {
                cout << "Invalid credentials!" << endl;
            }
            break;
        }
        case 3:
            cout << "Exit\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 3);

    return 0;
}