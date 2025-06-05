#include<iostream>
#include <forward_list>
#include<string>
#include<algorithm>


using namespace std;

int main()
{
    forward_list<string>ls = { "Hi", "Hello", "DELETED: Spam", "How are you?", "DELETED: Abuse" };
   // string cond = "DELETED:";
    auto p = ls.before_begin();
    auto c = ls.begin();
    while(c != ls.end())
    {
        if (c->rfind("DELETED:", 0) == 0)
        {
            c= ls.erase_after(p);
        }
        else
        {
            p = c;
            ++c;
        }
    }

    for (auto& i : ls)
    {
        cout << i << ", ";
    }
}