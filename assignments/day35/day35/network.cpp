#include <iostream>
#include <fstream>
#include <vector>
#include<chrono>
#include <string>
#include <algorithm>
#include<iomanip>
#include<sstream>

using namespace std;

enum LogLevel { INFO, DEBUG, WARNING, ERROR };

string getCurrentTime()
{
    //using namespace std::chrono;
    auto now = chrono::system_clock::now();
    auto in_time_t = chrono::system_clock::to_time_t(now);
    auto ms = chrono::duration_cast<chrono::milliseconds>(now.time_since_epoch()) % 1000;

    ostringstream oss;
    oss << put_time(localtime(&in_time_t), "%Y-%m-%d %H:%M:%S");
    oss << "." << setfill('0') << setw(3) << ms.count();
    return oss.str();
}

void log(LogLevel level, const string& message) {
    ofstream logFile("netmon_log.txt", ios::app);
    string levelStr;
    switch (level) {
    case INFO: levelStr = "[INFO] "; break;
    case DEBUG: levelStr = "[DEBUG] "; break;
    case WARNING: levelStr = "[WARNING] "; break;
    case ERROR: levelStr = "[ERROR] "; break;
    }
    cout << levelStr << message << endl;
    logFile << levelStr << message << endl;
    logFile << "[" << getCurrentTime() << "]" << levelStr << message << endl;
    logFile.close();
}

struct Packet {
    int packetID;
    string protocol;
    int size;

    Packet(int id, string proto, int sz) : packetID(id), protocol(proto), size(sz) {}
};

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

void filterByProtocol(vector<Packet>& packets, const string& protocol) {
    log(DEBUG, "Filtering packets by protocol: " + protocol);
    for (const auto& pkt : packets) {
        if (pkt.protocol == protocol) {
            cout << "[DEBUG] Packet " << pkt.packetID << " | " << pkt.protocol << " | " << pkt.size << " bytes" << endl;
        }
    }
}

void checkLargePackets(vector<Packet>& packets) {
    log(DEBUG, "Checking for large packets...");
    for (const auto& pkt : packets) {
        if (pkt.size > 1000) {
            log(WARNING, "Packet " + to_string(pkt.packetID) + " | " + pkt.protocol + " | " + to_string(pkt.size) + " bytes exceeds threshold.");
        }
    }
}

void menu() {
    vector<Packet> packets;
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
            filterByProtocol(packets, protocol);
            break;
        }
        case '3':
            checkLargePackets(packets);
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

int main() {
    menu();
    return 0;
}