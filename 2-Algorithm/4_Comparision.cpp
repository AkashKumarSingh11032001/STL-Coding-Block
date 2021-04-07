#include <bits/stdc++.h>
using namespace std;


bool compare(int a, int b)
{
    return a > b; // decreasing order and for incresing order reverse return (a < b)
}


void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i <= n-1; i++)     
      
    // Last i elements are already in place 
    for (j = 0; j <= n-i-1; j++) 
        if (arr[j] > arr[j+1]) 
            swap(arr[j], arr[j+1]); 
}

