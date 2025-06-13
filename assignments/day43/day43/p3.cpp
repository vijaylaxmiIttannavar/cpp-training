#include <iostream>
#include <queue>
#include <string>
#include <vector>

struct Task {
    std::string desc;
    int pty; // Higher value = more severe
   
    bool operator<(const Task& other) const {
        return pty < other.pty;                // max heap by default
    }
};

int main() {
    std::priority_queue<Task> q;

    q.push({ "FixBug ", 5});
    q.push({ "ImplementFeature ", 8 });
    q.push({ "CodeReview", 3 });
    q.push({ "de[ploy", 8 });

    while (!q.empty()) {
        Task p = q.top();
        std::cout << "Executed : " << p.desc << " priority " << p.pty << "\n";
        q.pop();
    }

    return 0;
}