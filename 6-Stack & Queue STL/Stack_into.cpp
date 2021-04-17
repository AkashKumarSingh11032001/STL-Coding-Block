#include <bits/stdc++.h>
using namespace std;


//  STACK -> LIFO
// method present: -> push(),pop(),top(),empty(),size()

int main(){

    stack<int> s;

    for (int i = 0; i <= 5; i++)
    {
        /* code */
        s.push(i);
    }
    
    //Loop
    while (!s.empty())
    {
        /* code */
        cout << s.top() <<" ";
        s.pop();
    }
    

}