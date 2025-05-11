#include <cmath>
#include <iostream>

using namespace std;

int fun(char hexDigit)
{
    if (hexDigit >= '0' && hexDigit <= '9') {
        return int(hexDigit - '0');
    }
    else if (hexDigit >= 'A' && hexDigit <= 'F') {
        return int(hexDigit - 'A' + 10);
    }
    else if (hexDigit >= 'a' && hexDigit <= 'f') {
        return int(hexDigit - 'a' + 10);
    }
    return -1;
}

int main()
{
    string hex;
    int decimal = 0, place = 0;
    cin >> hex;
    int n = hex.length();
    for (int i = n - 1; i >= 0; i--)
    {
        int digit = fun(hex[i]);
        decimal += digit * pow(16, place);
        place++;
    }

    cout  << decimal << endl;

    return 0;
}