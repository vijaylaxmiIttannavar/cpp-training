#include <list>
#include <iostream>

int main() {
    std::list<int> lst = { 1, 2, 3 };
    auto it = lst.end();
    --it;  // Bidirectional movement
    std::cout << *it;  // Output: 3
}