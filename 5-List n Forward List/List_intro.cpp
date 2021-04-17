#include <bits/stdc++.h>
using namespace std;

int main(){


    list<int> l;

    //inilizeation
    list<int> l2{1,2,3,4};
    //diffrent datatype
    list<string> l3{"adc","bdcs","cdcs"};
    // add element 
    l3.push_back("ddc");

    // itrate over list
    for(auto x:l3){
        cout << x <<"-->" ;
    }
}