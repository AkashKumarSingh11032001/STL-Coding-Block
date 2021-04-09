#include <bits/stdc++.h>
using namespace std;

int main() {

    int a = 5,b = 4;

    swap(a,b);
    cout << a << " " << b<<endl;

    cout << min(a,b) <<endl;
    cout << max(a,b) <<endl;

    int arr[]= {1,2,3,5,4,5,8};
    int n = sizeof(arr) / sizeof(int);
    reverse(arr,arr+n);

    for (int  i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] <<" ";
    }
    cout <<endl;
    
    // SWAPING ARRAY DATA
    swap(arr[0],arr[1]);
    for (int  i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] <<" ";
    }


}