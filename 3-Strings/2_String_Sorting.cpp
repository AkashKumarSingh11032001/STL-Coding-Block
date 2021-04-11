#include <bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cin >> n;

    cin.get(); // conssume extra space
    string str[100]; // vector of str
    // inputing each char
    for (int i = 0; i < n; i++)
    {
        /* code */
        getline(cin,str[i]);
    }

    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << str[i] <<endl;
    }
}