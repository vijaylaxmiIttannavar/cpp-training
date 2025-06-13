#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <iterator>
#include <algorithm>

int main() {
    std::vector<int> vec = { 10, 20, 30, 40, 50 };

  
    std::cout << "Using normal iterator:\n";
    std::vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

   
    std::cout << "Using reverse iterator:\n";
    for (auto rit = vec.rbegin(); rit != vec.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << "\n";

   
    std::cout << "Using const_iterator (read-only):\n";
    for (std::vector<int>::const_iterator cit = vec.cbegin(); cit != vec.cend(); ++cit) {
        std::cout << *cit << " ";
    }
    std::cout << "\n";

   
    std::cout << "Doubling each element:\n";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        *it *= 2;
        std::cout << *it << " ";
    }
    std::cout << "\n";

  
    std::list<std::string> names = { "Alice", "Bob", "Charlie", "Diana" };
    auto lit = names.begin();
    std::advance(lit, 2);      // move 2 positions forward
    std::cout << "2nd index in list: " << *lit << "\n";

    
    auto prevIt = std::prev(lit);
    std::cout << "Previous element: " << *prevIt << "\n";

  
    std::cout << "Distance from start to lit: " << std::distance(names.begin(), lit) << "\n";

   
    std::set<int> s = { 100, 200 };
    std::copy(vec.begin(), vec.end(), std::inserter(s, s.begin()));
    std::cout << "Set after inserting vector elements:\n";
    for (int x : s) std::cout << x << " ";
    std::cout << "\n";

   
    std::cout << "Using ostream_iterator to print vector:\n";
    std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << "\n";

    return 0;
}