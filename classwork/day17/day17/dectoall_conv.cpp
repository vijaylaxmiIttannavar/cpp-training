#include <iostream>
#include <math.h>
using namespace std;

int Decimaltobinary(int num, int base) 
{
    int r, place= 0, sum = 0;

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
    
    cout << Decimaltobinary(55, 8);

    return 0;
}



