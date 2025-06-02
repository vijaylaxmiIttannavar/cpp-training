#include<iostream>

using namespace std;

class adder {
    int val;
public:
    adder(int v) : val(v) {}

    int operator()(int x) const {
        return x + val;
    }
};


int main()
{
	adder add5(5);
	cout << add5(10); // Output: 15
}
