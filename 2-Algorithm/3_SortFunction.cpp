#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {56, 10, 11, 11, 11, 57, 12, 3, 59, 74, 2, 51, 66};
    int n = sizeof(arr) / sizeof(int);
    
    cout << "Before" <<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr,arr+n);

    cout << "After" <<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;
    
    
}