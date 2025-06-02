#include <iostream>
#include <fstream>
#include <vector>
#include <thread>
#include <chrono>
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
class Logger
{
    ofstream logFile;
public:
    Logger(const string &filename){
        logFile.open("job_log.txt", ios::app);
    }
    ~Logger()
    {
        if (logFile.is_open())
            logFile.close();
    }
    void log(LogLevel level, const string& message)
    {
        string levelStr;
        switch (level)
        {
        case INFO: levelStr = "[INFO] "; break;
        case DEBUG: levelStr = "[DEBUG] "; break;
        case WARNING: levelStr = "[WARNING] "; break;
        case ERROR: levelStr = "[ERROR] "; break;
        }
        cout << levelStr << message << endl;
        logFile <<"["<< getCurrentTime() <<"]" << levelStr << message << endl;
    }
};



struct Job {
    int jobID;
    int executionTime;
    int priority;

    Job(int id, int time, int prio) : jobID(id), executionTime(time), priority(prio) {}
};

vector<Job> loadJobs(const string& filename, Logger& logger) {
    ifstream file(filename);
   
    vector<Job> jobs;
    if (!file) {
        logger.log(ERROR, "File could not be opened.");
        return jobs;
    }
    int id, time, prio;
    while (file >> id >> time >> prio) {
        jobs.emplace_back(id, time, prio);
    }
    file.close();
    logger.log(INFO, "Successfully loaded " + to_string(jobs.size()) + " jobs.");
    return jobs;
}

void fifoScheduling(vector<Job>& jobs, Logger& logger)
{
    sort(jobs.begin(), jobs.end(), [](const Job& a, const Job& b) {
        return a.jobID < b.jobID;
        });
       logger.log(DEBUG, "Sorted jobs by FIFO (Job ID).");
}

void priorityScheduling(vector<Job>& jobs, Logger &logger) {
  
    sort(jobs.begin(), jobs.end(), [](const Job& a, const Job& b) {
        return a.priority > b.priority;
        });
    logger.log(DEBUG, "Sorted jobs by Priority.");
}

/*void executeJobs(const vector<Job>& jobs, Logger& logger) {
    int totalTime = 0;
    for (const auto& job : jobs) {
        logger.log(DEBUG, "Executing Job ID: " + to_string(job.jobID) + " | Priority: " + to_string(job.priority));
        this_thread::sleep_for(chrono::milliseconds(job.executionTime));
        totalTime += job.executionTime;
    }
   logger.log(INFO, "All jobs executed in " + to_string(totalTime) + "ms.");
}*/
void executeJobs(vector<Job>& jobs, Logger& logger)
{
   // using namespace std::chrono;
    auto start = chrono::high_resolution_clock::now();
    for (const auto& job : jobs) {
        logger.log(DEBUG, "Executing Job ID: " + to_string(job.jobID) +
            " | Priority: " + to_string(job.priority));

        this_thread::sleep_for(chrono::milliseconds(job.executionTime));
    }
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end - start).count();
    logger.log(INFO, "All jobs executed in " + to_string(duration) + "ms.");
}


void menu() {
    vector<Job> jobs;
    Logger logger("job_log.txt");
    char choice;
    void (*scheduleFunc)(vector<Job>&, Logger &logger) = nullptr;

    while (true) {
        cout << "\n==== JobChain Scheduler ====" << endl;
        cout << "1. Load jobs from file\n2. Choose scheduling algorithm\n3. Execute jobs\n4. Export log\n5. Exit" << endl;
        cout << "> ";
        cin >> choice;

        switch (choice) {
        case '1':
            jobs = loadJobs("jobs.txt",logger);
            break;
        case '2':
            cout << "Choose scheduling algorithm:\n   a. FIFO (Job ID)\n   b. Priority-based" << endl;
            cout << "> ";
            cin >> choice;
            scheduleFunc = (choice == 'a') ? fifoScheduling : priorityScheduling;
            logger.log(INFO, (choice == 'a') ? "Selected FIFO Scheduling." : "Selected Priority Scheduling.");
            break;
        case '3':
            if (!scheduleFunc || jobs.empty()) {
                logger.log(WARNING, "Scheduling not chosen or jobs not loaded.");
                break;
            }
            scheduleFunc(jobs, logger);
            executeJobs(jobs, logger);
            break;
        case '4':
            logger.log(INFO, "Log saved to job_log.txt.");
            break;
        case '5':
            return;
        default:
            logger.log(WARNING, "Invalid choice.");
        }
    }
}

int main() {
   
    menu();
    return 0;
}