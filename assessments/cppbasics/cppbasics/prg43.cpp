#include <iostream>

using namespace std;

int main()
{
    unsigned int max;
    cin>>max;
    max = ~max;

    cout << "maximum value possible : " << max;

    return 0;
}