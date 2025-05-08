#include <iostream>
#include<cstring>
using namespace std;

void fun(const char* str) 
{
    char word[100];  
    int i = 0;
    bool ans = false;

    while (*str!='\0')
    {
        if (*str != ' ' && *str != '\t' && *str != '\n')
        { 
            word[i++] = *str;
            ans = true;
        }
        else if (ans) 
        {  
            word[i] = '\0';  
            cout << word ;
            i = 0;  
            ans = false;
        }
        str++;
    }
    if (ans) 
    {
        word[i] = '\0';
        cout << word ;
    }
}

int main() 
{
    char str[50];
    cin.getline(str, 49);
    fun(str);
    return 0;
}
