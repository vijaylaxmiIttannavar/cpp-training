#include<iostream>
#include<thread>
#include<mutex>
#include<queue>

using namespace std;

queue<int> buffer;
mutex mtx;
std::condition_variable cv;
bool done = false;

void producer() {
    for (int i = 0; i < 10; ++i) {
        this_thread::sleep_for(chrono::milliseconds(100));
        {
            lock_guard<mutex> lock(mtx);
            buffer.push(i);
        }
        cv.notify_one();
    }
    {
        lock_guard<std::mutex> lock(mtx);
        done = true;
    }
    cv.notify_all();
}

void consumer() {
    while (true) {
        unique_lock<mutex> lock(mtx);
        cv.wait(lock, [] { return !buffer.empty() || done; });
        while (!buffer.empty()) {
            cout << "Consumed: " << buffer.front() << "\n";
            buffer.pop();
        }
        if (done) break;
    }
}

int main()
{
    thread t1(consumer);
    thread t2(producer);

    t1.join();
    t2.join();
}