#include <iostream>
#define M 1024
using namespace std;

void reverse(int arr[], int n, int k) {
    for (int i = 0; i < n; i += k) {
        int left = i, right = (i + k - 1 < n) ? (i + k - 1) : (n - 1);
        while (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}

int main() 
{
    
    int n;
    cin >> n;
    int arr[M];
    int k;
    int i;
    for (i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    reverse(arr, n, k);

    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }

    return 0;
}
