#include <iostream>
#include<string>
using namespace std;

bool search(string arr[], int size, const string& target)
{
    int l = 0, r = size - 1;
    while (l <= r) 
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == target)
            return true;
        else if (arr[mid] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return false;
}

bool fun(string List[][3], int rows, const string& target) 
{
    for (int i = 0; i < rows; i++) 
    {
        if (search(List[i], 3, target))
        {
            return true;
        }
    }
    return false;
}

int main()
{ 
    string List[4][3] = {
        {"Virat", "ABd", "pandey"},
        {"Rohit", "sachin", "ganguli"},
        {"shubham", "rahul", "rayna"},
        {"kl", "smith", "dhoni"}
    };

    string target;
    cout << "Enter name : ";

    getline(cin, target);
  
    if (fun(List, 4, target))
    { 
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
    return 0;
}
