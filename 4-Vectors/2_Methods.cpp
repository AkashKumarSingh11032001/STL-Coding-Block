#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v;

    // ****** USER InPUT
    for (int i = 1; i <= 5; i++)
    {
        /* code */
        int n;
        cin>>n;
        v.push_back(n); // push_back()
    }
    for(auto x:v){
        cout << x <<" ";
    }

    // pop_back() //remove last elemnt
    v.pop_back();
    for(auto x:v){
        cout << x <<" ";
    }

    //INSERT SOME elemnt in middle
    v.insert(v.begin()+3,100);
    for(auto x:v){
        cout << x <<" ";
    }


    

}