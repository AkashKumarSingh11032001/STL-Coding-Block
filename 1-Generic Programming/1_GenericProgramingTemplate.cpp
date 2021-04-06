#include <bits/stdc++.h>
using namespace std;

// Simple linear search without generic!!!
// int lineraSearch(int arr[],int n,int key){
//     for(int i=0;i<n;i++){
//         if(arr[i] == key){
//             return i;
//         }
//     }
//     return n;
// }

template<typename T>
int lineraSearch(T arr[],int n,T key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return n;
}



int main() {

    int a1[] = {1,2,3,4,5,6};
    int n1 = sizeof(a1)/sizeof(int);
    int key1 = 4;
    cout << lineraSearch(a1,n1,key1) << endl;

    float a2[] = {1.1,2.1,3.1,4.1,5.1,6.1};
    int n2 = sizeof(a2)/sizeof(int);
    float key2 = 4.1;
    cout << lineraSearch(a2,n2,key2) << endl;



}