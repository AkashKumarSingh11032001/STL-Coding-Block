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

    //sort 
    l2.sort();
    //reverse
    l3.reverse();

    //remove elemnt
    cout << l3.pop_front()<<endl;
    l3.pop_front();
    cout << l3.pop_front()<<endl;

    // add to front 
    l2.push_front(6);
    cout << l2.back() <<endl;
    l2.pop_back();
    // itrate over list l2
    for(auto x:l2){
        cout << x <<"-->" ;
    }

    // itrate over list l3
    for(auto x:l3){
        cout << x <<"-->" ;
    }
}