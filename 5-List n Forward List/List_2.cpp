#include <bits/stdc++.h>
using namespace std;

int main(){

    list<string> l{"hello","how","are","you"};

    l.push_back("How");
    l.push_back("may");
    l.push_back("help");
    l.push_back("you");
     
    for(auto s:l){
        cout << s <<"-->";
    }
    cout << endl;

    // remove a fruit
    string f;
    cin >> f;
    l.remove(f);

    for(auto s:l){
        cout << s <<"-->";
    }
    cout << endl;

    // erase elemt from particulr index
    auto it = l.begin();
    it++;
    it++;
    l.erase(it);

    for(auto s:l){
        cout << s <<"-->";
    }
    cout << endl;

    // insert elemt from list
    it = l.begin();
    it++;
    l.insert(it,"Hi!");

    for(auto s:l){
        cout << s <<"-->";
    }
    cout << endl;

    
}