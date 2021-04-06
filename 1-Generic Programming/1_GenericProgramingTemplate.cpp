#include <bits/stdc++.h>
using namespace std;


int lineraSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return n;
}

int main() {

    int a[] = {1,2,3,4,5,6};
    int n = sizeof(a)/sizeof(int);
    int key = 4;
    cout << lineraSearch(a,n,key) << endl;

}