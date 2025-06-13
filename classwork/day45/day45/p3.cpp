#include<iostream>
#include<thread>
#include<mutex>
#include<queue>

using namespace std;

mutex mtx;
std::condition_variable cv;
bool ready = false;

void worker() {
    unique_lock<mutex> lock(mtx);
    cv.wait(lock, [] { return ready; });
    cout << "Thread processing...\n";
}

void notifier() {
    this_thread::sleep_for(chrono::seconds(1));
    {
        lock_guard<mutex> lock(mtx);
        ready = true;
    }
    cv.notify_one();
}

int main()
{
    thread t1(worker);
    thread t2(notifier);

    t1.join();
    t2.join();
}