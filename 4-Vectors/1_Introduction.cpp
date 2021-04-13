#include <bits/stdc++.h>
using namespace std;

int main()
{

    // DECLARATION
    vector<int> a;
    vector<int> b(5, 10); // 5 deffrent int variable with 10 have default value
    vector<int> c(b.begin(), b.end());
    vector<int> d{0, 1, 2, 3, 4};

    // ITTRATE OVER VECTOR -1
    for (int i = 0; i < b.size(); i++)
    {
        /* code */
        cout << b[i] << " ";
    }
    cout << endl;

    // or
    // auto =>  vector<int>::iterator
    for (auto it = c.begin(); it != c.end(); it++)
    {
        cout << *it << ",";
    }
    cout << endl;

    // or
    // For each loop
    for (int x : d)
    {
        cout << x << ",";
    }
    cout << endl;

    // USER INPUT
    vector<int> g1;
    for (int i = 0; i <= 5; i++)
    {
        /* code */
        g1.push_back(i);
    }
    for(int j:g1){
        cout << j <<",";
    }
    cout << endl;
}