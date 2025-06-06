#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>
#include <map>
#include <set>
#include <deque>
#include <vector>
#include <ctime>

using namespace std;

enum AccessType { READ, WRITE, DELETE };

// Custom struct to hold file metadata
struct FileMeta 
{
    string fileName;
    string ownerUser;
};

class FileTracker {
private:
    // Internal data structures
    map<int, FileMeta> fileMetadata; // fileID -> FileMeta
    unordered_map<int, int> accessFrequency; // fileID -> access count
    unordered_map<int, int> lastAccessedTime; // fileID -> last accessed timestamp
    unordered_map<string, set<int>> userAccessFiles; // user -> files accessed
    unordered_map<int, deque<pair<string, string>>> accessHistory; // fileID -> deque of (user, accessType)
    set<pair<int, int>> recentAccessFiles; // (lastAccessTime, fileID) for quick retrieval

    int timestamp = 0; // Keeps track of access time

public:
    // Add a virtual file
    void addFile(int fileID, const string& fileName, const string& ownerUser) {
        fileMetadata[fileID] = { fileName, ownerUser };
        accessFrequency[fileID] = 0;
        lastAccessedTime[fileID] = 0;
        accessHistory[fileID] = deque<pair<string, string>>();
        recentAccessFiles.insert({ 0, fileID });
       // cout << "ID = " << fileID << " Name = " << fileName << " Owner = " << ownerUser << endl;
    }

    // Access a file (READ/WRITE)
    void accessFile(int fileID, AccessType accessType, const string& userName) {
        if (fileMetadata.find(fileID) == fileMetadata.end()) {
            cout << "Error: File ID " << fileID << " not found." << endl;
            return;
        }

        timestamp++; // Increment timestamp
        lastAccessedTime[fileID] = timestamp;
        accessFrequency[fileID]++;
        accessHistory[fileID].push_back({ userName, accessType == READ ? "READ" : "WRITE" });
        userAccessFiles[userName].insert(fileID);
        recentAccessFiles.insert({ timestamp, fileID });

        // Print the access action
        cout << fileID << " Type = " << (accessType == READ ? "READ" : "WRITE") << " User = " << userName << endl;
    }

    // Delete a file
    void deleteFile(int fileID) {
        if (fileMetadata.find(fileID) == fileMetadata.end()) {
            cout << "Error: File ID " << fileID << " not found." << endl;
            return;
        }

        // Remove the file from all data structures
        recentAccessFiles.erase({ lastAccessedTime[fileID], fileID });
        fileMetadata.erase(fileID);
        accessFrequency.erase(fileID);
        lastAccessedTime.erase(fileID);
        accessHistory.erase(fileID);
        for (auto& userFiles : userAccessFiles) {
            userFiles.second.erase(fileID);
        }
        cout << "File deleted successfully: ID = " << fileID << endl;
    }

    // List all files sorted by file name
    void listAllFiles() {
        cout << "[All Files]" << endl;
        for (auto& entry : fileMetadata) {
            cout << "ID: " << entry.first << " | Name: " << entry.second.fileName << " | Owner: " << entry.second.ownerUser << endl;
        }
    }

    // List files by most recent access
    void listRecentFiles() {
        cout << "[Recently Accessed Files]" << endl;
        for (auto& entry : recentAccessFiles) {
            int fileID = entry.second;
            cout << "ID: " << fileID << " | Name: " << fileMetadata[fileID].fileName
                << " | Last Accessed: " << lastAccessedTime[fileID] << endl;
        }
    }

    // List files by user access
    void listFilesByUser(const string& userName) {
        cout << "[Files Accessed by User: " << userName << "]" << endl;
        for (int fileID : userAccessFiles[userName]) {
            cout << "ID: " << fileID << " | Name: " << fileMetadata[fileID].fileName << endl;
        }
    }

    // List file access frequencies
    void listFileAccessFrequency() {
        cout << "[Access Frequency]" << endl;
        for (auto& entry : accessFrequency) {
            cout << "File ID: " << entry.first << " | Access Count: " << entry.second << endl;
        }
    }
};

// Command interface
int main() {
    FileTracker tracker;
    string command;

    while (true) {
        cout << "Enter command: ";
        getline(cin, command);
        istringstream iss(command); // Create a string stream
        string action;
        iss >> action; // Extract the first word (command type)

        if (action == "ADD") {
            int fileID;
            string fileName, ownerUser;
            if (iss >> fileID >> fileName >> ownerUser) {
                tracker.addFile(fileID, fileName, ownerUser);
            }
            else {
                cout << "[ERROR] Invalid ADD format.\n";
            }
        }
        else if (action == "ACCESS") {
            int fileID;
            string accessType, userName;
            if (iss >> fileID >> accessType >> userName) {
                tracker.accessFile(fileID, accessType == "READ" ? READ : WRITE, userName);
            }
            else {
                cout << "[ERROR] Invalid ACCESS format.\n";
            }
        }
        else if (action == "DELETE") {
            int fileID;
            if (iss >> fileID) {
                tracker.deleteFile(fileID);
            }
            else {
                cout << "[ERROR] Invalid DELETE format.\n";
            }
        }
        else if (action == "LIST_ALL") {
            tracker.listAllFiles();
        }
        else if (action == "LIST_RECENT") {
            tracker.listRecentFiles();
        }
        else if (action == "LIST_BY_USER") {
            string userName;
            if (iss >> userName) {
                tracker.listFilesByUser(userName);
            }
            else {
                cout << "[ERROR] Invalid LIST_BY_USER format.\n";
            }
        }
        else if (action == "LIST_FREQ") {
            tracker.listFileAccessFrequency();
        }
        else {
            cout << "[ERROR] Invalid command.\n";
        }
    }
}