#include <iostream>
#include <fstream>
#include <vector>
#include <thread>
#include <chrono>
#include <algorithm>

using namespace std;

enum LogLevel { INFO, DEBUG, WARNING, ERROR };

void log(LogLevel level, const string& message) {
    ofstream logFile("job_log.txt", ios::app);
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

struct Job {
    int jobID;
    int executionTime;
    int priority;

    Job(int id, int time, int prio) : jobID(id), executionTime(time), priority(prio) {}
};

vector<Job> loadJobs(const string& filename) {
    ifstream file(filename);
    vector<Job> jobs;
    if (!file) {
        log(ERROR, "File could not be opened.");
        return jobs;
    }
    int id, time, prio;
    while (file >> id >> time >> prio) {
        jobs.emplace_back(id, time, prio);
    }
    file.close();
    log(INFO, "Successfully loaded " + to_string(jobs.size()) + " jobs.");
    return jobs;
}

void fifoScheduling(vector<Job>& jobs) {
    sort(jobs.begin(), jobs.end(), [](const Job& a, const Job& b) {
        return a.jobID < b.jobID;
        });
    log(DEBUG, "Sorted jobs by FIFO (Job ID).");
}

void priorityScheduling(vector<Job>& jobs) {
    sort(jobs.begin(), jobs.end(), [](const Job& a, const Job& b) {
        return a.priority > b.priority;
        });
    log(DEBUG, "Sorted jobs by Priority.");
}

void executeJobs(const vector<Job>& jobs) {
    int totalTime = 0;
    for (const auto& job : jobs) {
        log(DEBUG, "Executing Job ID: " + to_string(job.jobID) + " | Priority: " + to_string(job.priority));
        this_thread::sleep_for(chrono::milliseconds(job.executionTime));
        totalTime += job.executionTime;
    }
    log(INFO, "All jobs executed in " + to_string(totalTime) + "ms.");
}

void menu() {
    vector<Job> jobs;
    char choice;
    void (*scheduleFunc)(vector<Job>&) = nullptr;

    while (true) {
        cout << "\n==== JobChain Scheduler ====" << endl;
        cout << "1. Load jobs from file\n2. Choose scheduling algorithm\n3. Execute jobs\n4. Export log\n5. Exit" << endl;
        cout << "> ";
        cin >> choice;

        switch (choice) {
        case '1':
            jobs = loadJobs("jobs.txt");
            break;
        case '2':
            cout << "Choose scheduling algorithm:\n   a. FIFO (Job ID)\n   b. Priority-based" << endl;
            cout << "> ";
            cin >> choice;
            scheduleFunc = (choice == 'a') ? fifoScheduling : priorityScheduling;
            log(INFO, (choice == 'a') ? "Selected FIFO Scheduling." : "Selected Priority Scheduling.");
            break;
        case '3':
            if (!scheduleFunc || jobs.empty()) {
                log(WARNING, "Scheduling not chosen or jobs not loaded.");
                break;
            }
            scheduleFunc(jobs);
            executeJobs(jobs);
            break;
        case '4':
            log(INFO, "Log saved to job_log.txt.");
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