#include <iostream>
#define MAX 1024
using namespace std;

int fun(int arr[], int n) {
    int totalSum = 0, leftSum = 0;

    
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

   
    for (int i = 0; i < n; i++) {
        totalSum -= arr[i]; 

        if (leftSum == totalSum) { 
            return i;
        }

        leftSum += arr[i]; 
    }

    return -1; 
}

int main() {
    int n;
    cin >> n;
    int arr[MAX]; 
    int i;

    for (i = 0;i < n;i++)
        cin >> arr[i];

    int index = fun(arr, n);

    if (index != -1) {
        cout << index << endl;
    }
    else {
        cout << "No index found." << endl;
    }

    return 0;
}
