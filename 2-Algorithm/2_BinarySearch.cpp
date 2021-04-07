#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {56, 11,11,11,11, 57, 12, 3, 59, 74, 2, 51, 66};
    int n = sizeof(arr) / sizeof(int);

    sort(arr, arr + n); // Binary search work on sorted array

    int key = 11;

    auto res = binary_search(arr, arr + n, key);

    if (res)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }

    // index of element : lower_bound(start,end,key) or uppper_bound(start,end,key)
    //lower_bound(start,end,key)
    int key1 = 11;
    auto a = lower_bound(arr,arr+n,key1); // retur (elemnt index >= key )
    int index = a - arr;
    cout << "at index: " <<index <<endl;
    
    //uppper_bound(start,end,key)
    int key2 = 11;
    auto b = upper_bound(arr,arr+n,key2); // retur ( elemnt index > key )
    int index1 = b - arr;
    cout << "at index: " <<index1 <<endl;
}