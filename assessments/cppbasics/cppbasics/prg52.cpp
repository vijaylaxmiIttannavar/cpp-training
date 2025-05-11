#include <iostream>
#include <limits.h> 
#include <float.h> 
using namespace std;

void fun1(int value) 
{
    cout<<"Checking integer limits..."<<endl;
   cout<<"Value: "<<value <<endl;
    cout<<"Min:" << INT_MIN<<" Max: "<< INT_MAX <<endl;
    if (value < INT_MIN || value > INT_MAX) {
         cout<<"Status: Exceeds limits!"<<endl;
    }
    else {
        cout<<"Status: Within limits."<<endl;
    }
}

void fun2(float value) {
    cout<<"Checking float limits..."<<endl;
    cout<<"Value: "<<value;
    cout<<"Min: " << FLT_MIN <<"Max: "<< FLT_MAX<<endl;
    if (value < FLT_MIN || value > FLT_MAX) {
       cout<<"Status: Exceeds limits!"<<endl;
    }
    else {
        cout << "Status: Within limits." << endl;;
    }
}

int main() {
    int intValue;
    float floatValue;

   
    cin>>intValue;
    fun1(intValue);

    
    cin>>floatValue;
    fun2(floatValue);

    return 0;
}
