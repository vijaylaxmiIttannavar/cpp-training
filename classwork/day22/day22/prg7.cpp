#include <iostream>
#include<cstring>
using namespace std;
                                       //count vowel using ptr
int fun(char* str)
{
    int i = 0, c=0;
    for (i = 0;str[i]!='\0';i++, str++)
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            c++;
        }
    }
    return c;
}

int main()
{
    char str[50];

    cin.getline(str, 50);

    int r = fun(str);

    cout << r << endl;
}

   
        
