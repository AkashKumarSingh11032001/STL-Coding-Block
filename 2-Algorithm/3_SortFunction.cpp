#include <bits/stdc++.h>
using namespace std;

// Define Comparator function
bool compare(int a, int b)
{
    return a > b; // decreasing order and for incresing order reverse return (a < b)
}

int main()
{

    int arr[] = {56, 10, 11, 11, 11, 57, 12, 3, 59, 74, 2, 51, 66};
    int n = sizeof(arr) / sizeof(int);

    cout << "Before" << endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, arr + n, compare);

    cout << "After" << endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;
}