#include <iostream>
using namespace std;

void fun(int decimal)    
{
    int binary[32]; 
    int index = 0;

    while (decimal > 0) {
        binary[index++] = decimal % 2;  
        decimal /= 2;  
    }
 
    for (int i = index - 1; i >= 0; i--) {
        cout<< binary[i];
    }
    cout << endl;
}

int main() {
    int decimal;   
    cin >> decimal;

    if (decimal == 0) {
        cout << "binary : 0" << endl;
    }
    else {
       fun(decimal);
    }

    return 0;
}
