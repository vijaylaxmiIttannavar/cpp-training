#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<array<float, 5>, 3> s = {
    array<float, 5>{20.0, 21.0, 22.0, 20.5, 19.8},  // Sensor 1
    array<float, 5>{30.0, 30.2, 29.8, 30.1, 30.3},  // Sensor 2
    array<float, 5>{25.0, 26.0, 24.0, 25.5, 26.2}   // sensor 3
    };
    float sum1 = 0.0, sum2=0.0, sum3=0; 
    for (int i = 0;i < 3;i++)
    {    
        for (int  j= 0;j < 5;j++)
        { 
            if (i==0)
                sum1 += s[i][j] + 0.5;
            else if(i==1)
                sum2 += s[i][j] - 0.5;
            else
                sum3 += s[i][j] + 1.2;
        }
   }
    cout << "avarage :" << sum1 / 5<<endl;
    cout << "avarage :" << sum2 / 5<<endl;
    cout << "avarage :" << sum3 / 5 << endl;
}