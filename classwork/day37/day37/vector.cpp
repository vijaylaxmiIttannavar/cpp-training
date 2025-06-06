#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& v) {
    for (int num : v)
     cout << num << " ";
   cout << "\n";
}

int main() {
    vector<int> vec = { 10, 20, 30 };
    printVector(vec);
}