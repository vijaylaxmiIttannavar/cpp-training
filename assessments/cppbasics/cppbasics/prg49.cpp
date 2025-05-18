#include <iostream>
#include <math.h>
using namespace std;

int Decimaltoall(int num, int base)          //dc to octa
{
    int r, place = 0, sum = 0;

    while (num)
    {
        r = num % base;
        sum += r * pow(10, place);
        num /= base;
        place++;

    }

    return sum;
}

int main() {
    int num;
    cin >> num;
    cout << Decimaltoall(num, 8);

    return 0;
}



