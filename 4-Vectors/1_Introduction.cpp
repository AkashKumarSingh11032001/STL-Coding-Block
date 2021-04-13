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
    for (int i = 1; i <= 5; i++)
    {
        /* code */
        g1.push_back(i);
    }
    // 1 2 3 4 5 6
    for(auto x = g1.begin(); x != g1.end(); x++){
        cout << *x <<" " ;
    }
    cout << endl;
    // Reverse order: 6 5 4 3 2 1
    for(auto x = g1.rbegin(); x != g1.rend(); x++){
        cout << *x <<" " ;
    }
    cout << endl;

    // OTHER IMP FUNCTION IN VECTOR

    cout << "Size : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.max_size();

    // resizes the vector size to 4
    g1.resize(4);
    cout << "\nSize : " << g1.size();
    
    // empty()
    if (g1.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";

}