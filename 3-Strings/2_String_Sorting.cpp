#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b){
    if(a.length() == b.length()){
        return a < b;
    }
    return a.length() > b.length(); //larger first
}

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


    // sorting
    sort(str,str + n,compare);

    //printing str
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << str[i] <<endl;
    }


}