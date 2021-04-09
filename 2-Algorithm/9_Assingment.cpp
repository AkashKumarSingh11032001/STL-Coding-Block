#include <bits/stdc++.h>
using namespace std;

int main()
{

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
        vector<int> vect(arr, arr + n);
        next_permutation(vect.begin(), vect.end());
        for (int i = 0; i < n; i++)
        {
            cout << vect[i] << " ";
        }
    }
}