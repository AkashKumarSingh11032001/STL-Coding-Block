#include <bits/stdc++.h>
using namespace std;
/// VVVVVV.IIIIIII.MMMMMMMMMMM.PPPPP LOGIC ***********
int main() {

    int arr[] = {56, 10, 11, 57, 12, 3, 59, 74, 2, 51, 66};
    int n = sizeof(arr) / sizeof(int);

    // rotate fun
    rotate(arr,arr+2,arr+n);

    for (int  i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i] <<" ";
    }
    cout<<endl;

    //Apply the same with vector
    vector<int> v = {56, 10, 11, 57, 12, 3, 59, 74, 2, 51, 66};
    rotate(v.begin(),v.begin()+2,v.end());
    
    for (int  i = 0; i < v.size(); i++)
    {
        /* code */
        cout << v[i] <<" ";
    }
    cout<< endl;

    // Lexigraphical Ordr // Next permutation
    vector<int> v2 = {1,2,3};
    next_permutation(v2.begin(),v2.end());
    for(int i: v2){
        cout<< i << " ";
    }
    
}