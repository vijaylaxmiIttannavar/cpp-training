#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

enum LogLevel { INFO, DEBUG, WARNING, ERROR };

class NetMon {
private:
    vector<Packet> packets;
    string logFileName;

    struct Packet {
        int packetID;
        string protocol;
        int size;

        Packet(int id, string proto, int sz) : packetID(id), protocol(proto), size(sz) {}
    };

    void log(LogLevel level, const string& message) {
        ofstream logFile(logFileName, ios::app);
        string levelStr;
        switch (level) {
            case INFO: levelStr = "[INFO] "; break;
            case DEBUG: levelStr = "[DEBUG] "; break;
            case WARNING: levelStr = "[WARNING] "; break;
            case ERROR: levelStr = "[ERROR] "; break;
        }
        cout << levelStr << message << endl;
        logFile << levelStr << message << endl;
        logFile.close();
    }

    vector<Packet> loadPackets(const string& filename) {
        ifstream file(filename);
        vector<Packet> packets;
        if (!file) {
            log(ERROR, "File could not be opened.");
            return packets;
        }
        int id, size;
        string protocol;
        while (file >> id >> protocol >> size) {
            packets.emplace_back(id, protocol, size);
        }
        file.close();
        log(INFO, "Successfully loaded " + to_string(packets.size()) + " packets.");
        return packets;
    }

    void filterByProtocol(const string& protocol) {
        log(DEBUG, "Filtering packets by protocol: " + protocol);
        for (const auto& pkt : packets) {
            if (pkt.protocol == protocol) {
                cout << "[DEBUG] Packet " << pkt.packetID << " | " << pkt.protocol << " | " << pkt.size << " bytes" << endl;
            }
        }
    }

    void checkLargePackets() {
        log(DEBUG, "Checking for large packets...");
        for (const auto& pkt : packets) {
            if (pkt.size > 1000) {
                log(WARNING, "Packet " + to_string(pkt.packetID) + " | " + pkt.protocol + " | " + to_string(pkt.size) + " bytes exceeds threshold.");
            }
        }
    }

public:
    NetMon(const string& filename) : logFileName(filename) {
        log(INFO, "NetMon initialized with log file: " + filename);
    }

    ~NetMon() {
        // Destructor, auto-called when object goes out of scope
        log(INFO, "NetMon is shutting down.");
    }

    // Manual cleanup if needed
    void destroy() {
        log(INFO, "Manual cleanup called. Destroying NetMon.");
        // If you need any additional cleanup, add it here
        // Example: clearing the packet vector or releasing resources.
        packets.clear();
    }

    void menu() {
        char choice;

        while (true) {
            cout << "\n==== NetMon Packet Monitor ====" << endl;
            cout << "1. Load packet data\n2. Filter by protocol\n3. Check for large packets\n4. Export log\n5. Exit" << endl;
            cout << "> ";
            cin >> choice;

            switch (choice) {
                case '1':
                    packets = loadPackets("packets.txt");
                    break;
                case '2': {
                    cout << "Enter protocol (TCP, UDP, ICMP): ";
                    string protocol;
                    cin >> protocol;
                    filterByProtocol(protocol);
                    break;
                }
                case '3':
                    checkLargePackets();
                    break;
                case '4':
                    log(INFO, "Logs saved to netmon_log.txt.");
                    break;
                case '5':
                    return;
                default:
                    log(WARNING, "Invalid choice.");
            }
        }
    }
};

int main() {
    NetMon netMon("netmon_log.txt");

    // Call menu
    netMon.menu();

    // Manually clean up the object
    netMon.destroy();

    return 0;
}
