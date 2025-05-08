#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

int hexToDecimal(const char* hex) 
{
    int length = strlen(hex);
    int decimal = 0;
    int base = 1; 
 
    for (int i = length - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - '0') * base; 
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 'A' + 10) * base;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f') {
            decimal += (hex[i] - 'a' + 10) * base;
        }
        else {
            cout << "Invalid hexadecimal input" << endl;
            return -1;
        }
        base *= 16; 
    }

    return decimal;
}

int main() {
    char hex[20];

    scanf("%s", hex);

    int decimal = hexToDecimal(hex);

    if (decimal != -1) {
        cout << "Decimal equivalent: %d\n" << endl;
    }

    return 0;
}
