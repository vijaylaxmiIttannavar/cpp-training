#include <iostream>
#include <fstream>
#include <vector>
#include <thread>
#include <string>
#include <chrono>
#include <condition_variable>
#include <mutex>
#include <sstream>

using namespace std;

class Signup {
public:
    int companyid;
    string companyname;
    int cid;
    string str;
    int MBdown;
    int MBup;

    Signup(int cmpid, string name, int custid, string str, int MBdown, int MBup)
        : companyid(cmpid), companyname(name), cid(custid), str(str), MBdown(MBdown), MBup(MBup) {}
};

class login {
public:
    mutex mtx;

    void customer_bill(const vector<Signup>& sig) {
        lock_guard<mutex> lock(mtx);
        ofstream file("Customer.txt", ios::app);
        if (!file) {
            cerr << "Error opening log file.\n";
            return;
        }

        for (const auto& customer : sig) {
            file << "Customer ID: " << customer.cid << " Company: " << customer.companyname << endl;
            if (customer.companyname == "outside_operator") {
                file << "* Services outside the mobile operator *" << endl;
            }
            else {
                file << "* Services within the mobile operator *" << endl;
            }

            int val = 0;
            if (customer.str == "MOC") {
                val = customer.MBdown;
                file << "Incoming voice call durations: " << val << endl;
            }
            if (customer.str == "MTC") {
                val = customer.MBup;
                file << "Outgoing voice call durations: " << val << endl;
            }
            if (customer.str == "SMS-MT") {
                val = customer.MBdown;
                file << "Incoming SMS messages: " << val << endl;
            }
            if (customer.str == "SMS-MO") {
                val = customer.MBup;
                file << "Outgoing SMS messages: " << val << endl;
            }
            file << "MB downloaded: " << customer.MBdown << " MB\n";
            file << "MB uploaded: " << customer.MBup << " MB\n";
        }
    }

    void operator_bill(const vector<Signup>& sig) {
        lock_guard<mutex> lock(mtx);
        ofstream file("operator.txt", ios::app);
        if (!file) {
            cerr << "Error opening log file.\n";
            return;
        }

        file << "* Services outside the mobile operator *" << endl;
        for (const auto& customer : sig) {
            int val = 0;
            if (customer.str == "MOC") {
                val = customer.MBdown;
                file << "Incoming voice call durations: " << val << endl;
            }
            if (customer.str == "MTC") {
                val = customer.MBup;
                file << "Outgoing voice call durations: " << val << endl;
            }
            if (customer.str == "SMS-MT") {
                val = customer.MBdown;
                file << "Incoming SMS messages: " << val << endl;
            }
            if (customer.str == "SMS-MO") {
                val = customer.MBup;
                file << "Outgoing SMS messages: " << val << endl;
            }
        }
    }
};

int menu(vector<Signup>& sig) {
    ifstream ss("data.cdr");
    if (!ss.is_open()) {
        cerr << "Failed to open data.cdr file." << std::endl;
        return 1;
    }

    string line, str, companyname;
    int cid, custid, MBdown, MBup;
    //vector<Signup> sig;

    while (getline(ss, line)) {
        stringstream ssline(line);
        ssline >> custid >> companyname >> cid >> str >> MBdown >> MBup;
        sig.push_back(Signup(custid, companyname, cid, str, MBdown, MBup));
    }
    ss.close();

    int ch = 0;
    cout << "Enter choice (1 - Customer Bill, 2 - Operator Bill, 3 - Exit): ";
    cin >> ch;

    login l;

    while (true) {
        switch (ch) {
        case 1:
            l.customer_bill(sig);
            break;
        case 2:
            l.operator_bill(sig);
            break;
        case 3:
            cout << "Exiting...\n";
            return 0;
        default:
            cout << "Invalid option. Try again.\n";
            break;
        }
        cout << "Enter choice (1 - Customer Bill, 2 - Operator Bill, 3 - Exit): ";
        cin >> ch;
    }
}

int main() {
    cout << "Welcome\n";
    vector<Signup> sig;
    menu(sig);

    return 0;
}