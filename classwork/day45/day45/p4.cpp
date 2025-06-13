#include<iostream>
#include<thread>
#include<mutex>
#include<queue>

using namespace std;

mutex mtx;
std::condition_variable cv;
bool ready = false;

void ping() {
    for (int i = 0; i < 5;i++) {
        this_thread::sleep_for(chrono::seconds(1));
        {
            lock_guard<mutex> lock(mtx);
            ready = true;
           // i++;
        }
    }
    unique_lock<mutex> lock(mtx);
    cv.wait(lock, [] { return ready; });
    cout << "ping\n";
    cv.notify_one();
}

void pong() {
    for (int i = 0; i < 5; i++ ) {
        this_thread::sleep_for(chrono::seconds(1));
        {
            lock_guard<mutex> lock(mtx);
            ready = true;
           
        }
    }
    unique_lock<mutex> lock(mtx);
    cv.wait(lock, [] { return ready; });
    cout << "pong\n";
    cv.notify_one();
}

int main()
{
    thread t1(ping);
    thread t2(pong);

    t1.join();
    t2.join();
}