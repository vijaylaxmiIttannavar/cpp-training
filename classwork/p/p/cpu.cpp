#include <iostream>
#include <fstream>
#include <thread>
#include <vector>
#include <queue>
#include <string>
#include <mutex>
#include <condition_variable>
#include <chrono>

//using namespace std;

struct Task {
    std::string taskID;
    int load;  
};

class TaskQueue 
{
private:
    std::queue<Task> taskQueue;
    std::mutex queueMutex;
public:
    TaskQueue(const std::vector<Task>& tasks) {
        for (const auto& task : tasks) {
            taskQueue.push(task);
        }
    }

    bool getTask(Task& task) {
        std::lock_guard<std::mutex> lock(queueMutex);
        if (taskQueue.empty()) {
            return false;
        }
        task = taskQueue.front();
        taskQueue.pop();
        return true;
    }


};

void executeTask(int cpuID, TaskQueue& taskQueue) {
    Task task;
    while (taskQueue.getTask(task)) {
        std::cout << "CPU-" << cpuID << " picked Task " << task.taskID
            << " (Load: " << task.load << ")" << std::endl;

      
        std::this_thread::sleep_for(std::chrono::seconds(task.load));

        std::cout << "CPU-" << cpuID << " finished Task " << task.taskID << std::endl;
    }
}

int main() {
    std::ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Failed to open input.txt file." << std::endl;
        return 1;
    }

    std::string line;
    int numCPUs = 0;
    std::vector<Task> tasks;

   
    while (std::getline(inputFile, line)) {
        if (line.find("CPUs:") != std::string::npos) {
            numCPUs = std::stoi(line.substr(5));
        }
        else if (line.find(": Load") != std::string::npos) 
        {
            size_t colonPos = line.find(':');
            std::string taskID = line.substr(0, colonPos);
            int load = std::stoi(line.substr(colonPos + 7));
            tasks.push_back({ taskID, load });
        }
    }

    inputFile.close();

  
    if (numCPUs <= 0 || tasks.empty()) {
        std::cerr << "Invalid input data." << std::endl;
        return 1;
    }

   
    TaskQueue taskQueue(tasks);
    std::vector<std::thread> threads;

    for (int i = 1; i <= numCPUs; ++i) {
        threads.push_back(std::thread(executeTask, i, std::ref(taskQueue)));
    }

    
    for (auto& t : threads) {
        t.join();
    }

    std::cout << "All tasks coympleted." << std::endl;

    return 0;
}