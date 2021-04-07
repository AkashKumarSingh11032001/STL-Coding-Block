#include <bits/stdc++.h>
using namespace std;


bool compare(int a, int b)
{
    return a < b; // decreasing order and for incresing order reverse return (a < b)
}


void bubbleSort(int arr[], int n, bool (&cmp)(int a, int b)) 
{ 
    int i, j; 
    for (i = 0; i <= n-1; i++)     
      
    // Last i elements are already in place 
    for (j = 0; j <= n-i-1; j++) 
        if (cmp(arr[j], arr[j+1])) 
            swap(arr[j], arr[j+1]); 
}

int main() {

    int arr[] = {56, 10, 11, 57, 12, 3, 59, 74, 2, 51, 66};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort(arr,n,compare);

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
    cout << endl;


}