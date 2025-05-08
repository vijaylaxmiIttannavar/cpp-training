#include <iostream>
#include <cstring>
using namespace std;

void fun(char*);
int fun_len(char*);
void get_w(char*);

int main() {
    char str[50];
    cin.getline(str, 49);

    get_w(str);
     
    /*
    char* tk;
    tk = strtok(str, " "); // Tokenize 
    while (tk != NULL) 
    {
        fun(tk);            // Reverse 
        cout << tk<< " ";
        tk = strtok(NULL, " "); //Get next token
    }  */

    return 0;
}

void fun(char* word)
{
    int i = 0;
    int len = 0;
    len = fun_len(word);
    len--;
    while (i < len)
    {
        char temp = word[i];
        word[i] = word[len];
        word[len] = temp;
        i++;
        len--;
    }
}
int fun_len(char* word)
{
    int c = 0;
    while (word[c] != '\0')
    {
        c++;
    }
    return c;
}


void get_w(const char* str)
{
    char word[100];
    int i = 0;
    bool ans = false;

    while (*str != '\0')
    {
        if (*str != ' ' && *str != '\t' && *str != '\n')
        {
            word[i++] = *str;
            ans = true;
        }
        else if (ans)
        {
            word[i] = '\0';
            fun(word);
            i = 0;
            ans = false;
        }
        str++;
    }
    if (ans)
    {
        word[i] = '\0';
        fun(word);
    }
}