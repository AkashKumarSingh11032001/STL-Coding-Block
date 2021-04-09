#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    while (T--)
    {
        /* code */
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> arr[i];
        }
       

        cout << next_permutation(arr,arr+n) <<endl;



        
    }
    
}