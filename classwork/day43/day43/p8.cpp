#include <forward_list>
#include <iostream>

int main() {
    std::forward_list<int> fl = { 1, 2, 3 };
    for (auto it = fl.begin(); it != fl.end(); ++it)
        std::cout << *it << " ";
}