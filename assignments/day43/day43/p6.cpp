#include <iostream>
#include <queue>
#include <string>
#include <vector>

struct Patient {
    std::string name;
    int age;
    int severity; 

    
    bool operator<(const Patient& other) const {
        return severity < other.severity; 
    }
};

int main() {
    std::priority_queue<Patient> t;

    t.push({ "John", 65, 5 });
    t.push({ "Alice", 70, 5 });
    t.push({ "Bob", 30, 7 });
    t.push({ "Eve", 40, 5 });

    while (!t.empty()) {
        Patient p = t.top();
        std::cout << "Treating patient: " << p.name << "age :" << p.age<<  "with severity " << p.severity << "\n";
        t.pop();
    }

    return 0;
}