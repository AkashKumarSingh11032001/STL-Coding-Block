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
    cout << endl;

    // pop_back() //remove last elemnt
    v.pop_back();
    for(auto x:v){
        cout << x <<" ";
    }
    cout << endl;

    //INSERT SOME elemnt in middle
    v.insert(v.begin()+3,100);
    for(auto x:v){
        cout << x <<" ";
    }
    cout << endl;

    //Erase elemt from any position
    v.erase(v.begin()+2);
    for(auto x:v){
        cout << x <<" ";
    }
    cout << endl;

    //erase range of elemt
    v.erase(v.begin()+2, v.end()+3);
    for(auto x:v){
        cout << x <<" ";
    }
    cout << endl;

    // remove all emet from vector,but it doent delete memory
    // v.clear();

    //  REFERENCE OPR
    cout << "\nReference operator [g] : g1[2] = " << v[2]; //return reference of elemt at positon 4
  
    cout << "\nat : g1.at(4) = " << v.at(4); // return elemt at positon 4
  
    cout << "\nfront() : g1.front() = " << v.front(); // give first elemt
   
    cout << "\nback() : g1.back() = " << v.back(); // return last elemt

    // RESERVE

    // expensive oprtion {don't use this way of user input}
            // int a;
            // cin >> a;
            // vector<int> vect;
            // for (int i = 1; i <= a; i++)
            // {
            //     /* code */
            //     int n;
            //     cin>>n;
            //     v.push_back(n); // push_back()
            // }
            // for(auto x:vect){
            //     cout << x <<" ";
            // }
            // cout << endl;

    // use reserve for user input
    int a;
    cin >> a;
    vector<int> vect;
    // to avoid doubling v.vimp
    vect.reserve(1000);

    for (int i = 1; i <= a; i++)
    {
        /* code */
        int n;
        cin>>n;
        v.push_back(n); // push_back()
    }
    for(auto x:vect){
        cout << x <<" ";
    }
    cout << endl;





}