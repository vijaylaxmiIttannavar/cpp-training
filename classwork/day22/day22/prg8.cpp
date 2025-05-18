#include <iostream>
#include<cstring>
using namespace std;

void fun(char* str)
{
    int i = 0, c = 0, j=0, k=0;
    char str1[50] = {'\0'};
    //for (i = 0;str[i] != '\0';i++)
    //{
        for (i = 0;str[i] != '\0';i++)
        {
            if (str[i] != str[i] - 2)
            {
                c++;
                str1[k++] = str[i];
                break;
            }    
            cout << str1 << " " << k;
            cout << c;
        }         
    //}   
}

int main()
{
    char str[50];

    cin.getline(str, 50);

    fun(str);
}



