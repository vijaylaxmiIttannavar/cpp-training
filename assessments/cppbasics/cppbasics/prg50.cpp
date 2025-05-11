#include <cmath>
#include <iostream>
#include <string>

using namespace std;

string fun(int decimal)
{
    string hex = "";
    char h[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    while (decimal > 0) 
    {
        int rem = decimal % 16;
        hex = h[rem] + hex;
        decimal /= 16;
    }
    return hex;
}

int main()
{
    int decimal;
    cin >> decimal;
    cout << fun(decimal) << endl;
    return 0;
}