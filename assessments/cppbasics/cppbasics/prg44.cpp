
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a ^ b)
        cout << "not equal";
    else
        cout << "equal";

    return 0;
}
