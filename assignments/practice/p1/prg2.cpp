#include <iostream>
using namespace std;

int main()
{
    int n=101;
    int rem=0, sum=0;
    int temp;
    for(int i=0;i<=n;i++)
    {
        temp=i;
        while(i>0)
        {
            rem=i%10;
            sum=sum+rem;
            i=i/10;
        }
        if(temp%sum==0)
        {
            cout<<"hashed : "<<temp<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
   
}
