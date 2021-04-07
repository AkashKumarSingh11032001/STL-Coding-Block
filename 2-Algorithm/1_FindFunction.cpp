#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {1, 10, 56, 95, 85};
    int n = sizeof(arr) / sizeof(int);

    // Search -> Find()

    int key = 56;
    auto i = find(arr, arr + n, key);
    if (*i == key)
    {
        int index = i - arr; // Remeber : help to find index
        cout << "Yes, at index: " << index << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}