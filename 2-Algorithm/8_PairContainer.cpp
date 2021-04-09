#include <bits/stdc++.h>
using namespace std;


int main(){

    pair<int,char> p;
    p.first = 10;
    p.second = 'A';
    
    cout << p.first << "," << p.second <<endl;

    // ANOTHER WAY

    pair<int,string> p2 = make_pair(100,"Audi");
    cout << p2.first << " " <<p2.second <<endl;

    // ?? INPUT FROM USER

    int a,b;
    cin >> a >>b;
    pair<int,int> p3 = make_pair(a,b);

    // you ca make 
    // pair of list
    // pair of vector
    // pair of pair 
    pair<pair<int,int>,string> car;
    car.second = "Akash";
    car.first.first = 10;
    car.first.second = 5;

    cout << car.first.first <<" " <<car.first.second << "=" <<car.second  <<endl;


}