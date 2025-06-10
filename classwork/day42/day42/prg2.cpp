#include <iostream>
#include <unordered_set>
#include <string>

int main() {
    std::unordered_set<std::string> names;
    std::string name;

    std::cout << "Enter 5 names (duplicates allowed):\n";
    for (int i = 0; i < 5; ++i) {
        std::getline(std::cin, name);
        names.insert(name);
    }

    std::cout << "\nUnique names:\n";
    for (const auto& n : names) {
        std::cout << n << "\n";
    }

    return 0;
}