/*#include <iostream>
#include <math.h>
using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0, base = 1;

    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }

    return decimal;
}

int main() {
    int binary;

    cin >> binary;

   cout<< binaryToDecimal(binary);

    return 0;
}*/


#include <iostream>
#include <math.h>
using namespace std;

int binarytodec(int num, int base)
{
    int r, place = 0, sum = 0;

    while (num)
    {
        r = num % 10;
        sum += r * pow(base, place);
        place++;
        num /= 10;

    }

    return sum;
}

int main() {

    cout << binarytodec(101, 2);

    return 0;
}




