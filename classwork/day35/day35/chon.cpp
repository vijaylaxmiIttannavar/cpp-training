#include <iostream>
#include<ctime>
#include <chrono>

int main() {
    auto now = std::chrono::system_clock::now();
    std::time_t timeNow = std::chrono::system_clock::to_time_t(now);

    std::cout << "Current time: " << std::ctime(&timeNow);
}