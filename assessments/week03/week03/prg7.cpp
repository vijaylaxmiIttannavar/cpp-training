#include <iostream>
#define MAX 1024
#define MAX 1024

using namespace std;

void fun(int arr[], int n, int keys[], int m) {
    int count[MAX] = { 0 }; 

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i] == keys[j]) {
                count[j]++;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        cout << keys[i] << "-" << count[i] << endl;
    }
}

int main() {
    int keys[MAX];
    int arr[MAX];

    int n, m; 
    n = sizeof(arr) / sizeof(arr[0]);
    m = sizeof(keys) / sizeof(keys[0]);
    //cin >> m;
   // cout << "Enter " << m << " key values: ";
    for (int i = 0; i < m; i++) {
        cin >> keys[i];
    }
  
    //cin >> n;
    //cout << "Enter " << n << " array values: ";
    for (int j = 0; j < n; j++) {
        cin >> arr[j];
    }

    fun(arr, n, keys, m);

    return 0;
}
