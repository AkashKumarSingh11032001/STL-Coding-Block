#include <bits/stdc++.h>
using namespace std;

// implimenting a graph
int main(){

    // list to create graph Data structur

    list<pair<int,int>> *l; // dynamic list
    int n;
    cin >> n;

    l = new list<pair<int,int>> [n];

    int e;
    cin >> e;
    for (int i = 0; i < e; i++)
    {
        /* code */
        int x,y,wt;
        cin >> x >>y >>wt;
        l[x].push_back(make_pair(y,wt));
        l[y].push_back(make_pair(x,wt));
    }

    // print linked list

    for (int i = 0; i < n; i++)
    {
        /* code */
        for(auto s:l[i]){
            cout << "(" << s.first <<"," <<s.second <<")";

        }
        cout <<endl;
    }
    
    




}