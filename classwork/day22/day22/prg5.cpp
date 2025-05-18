#include <iostream>
using namespace std;
                                         //reverse aray using ptr
void fun(int* ptr, int n) 
{
    int* i = nullptr;
    int* e = nullptr;
       i = ptr;         
       e = ptr + n - 1;
    while (i < e)
    {
        int temp = *i;
        *i = *e;
        *e = temp;   
        i++;
        e--;
    }
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    fun(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
