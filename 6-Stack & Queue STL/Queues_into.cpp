#include <bits/stdc++.h>
using namespace std;

//  QUEUES -> FIFO
// method present: -> push(),pop(),Front(),empty(),size()

int main() {

    queue<int> q;
    for (int i = 1; i <=5; i++)
    {
        /* code */
        q.push(i);
    }

    while (! q.empty())
    {
        /* code */
        cout << q.front() << "<--";
        q.pop();
    }


    
    
}