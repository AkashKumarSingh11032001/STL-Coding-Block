#include <bits/stdc++.h>
using namespace std;
// STACK : using 2 queues
template<typename T>
class Stack{
    queue<T> q1,q2;
public:
    void push(T x){
         q1.push(x);
    }

    void pop(){
        // remove last ellemt from q1
        // we have to move first n-1 elem in q2
        //interchange the name of q1 and q2
        if(q1.empty()){
            return;
        }

        while (q1.size() > 1)
        {
            /* code */
            T element = q1.front();
            q2.push(element);
            q1.pop();
        }
        // remove last ele 
        q1.pop();

        //swap the name of q1 and q2
        swap(q1,q2);
        
    }

    void top(){


        while (q1.size() > 1)
        {
            /* code */
            T element = q1.front();
            q2.push(element);
            q1.pop();
        }

        // 1 ele in q1
        T element = q1.front();
        q1.pop();
        q2.push(element);

        swap(qq1,q2);
        
    }

    int size(){
        return q1.size() + q2.size();
    }

};
int main(){

}