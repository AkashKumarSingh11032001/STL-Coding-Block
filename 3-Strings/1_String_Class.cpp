#include <bits/stdc++.h>
using namespace std;

int main() {

    string s0;
    string s1("Akash");

    string s2 = "Hello World";
    string s3(s2);

    string s4 = s3;

    cout << s1 <<" "<<s2 <<" "<<s3 <<" "<<s4 <<endl;

    char a[] = {'a','b','c','\0'};
    string s5(a);

    cout << s5;

    // empty()
    if(s0.empty()){
        cout << "Empty" <<endl;
    }

    //append
    s0.append("Added");
    cout << s0 <<endl;

    s0 += " and Python";
    cout << s0 <<endl;

    // clear
    cout << s0.length() <<endl;
    s0.clear();
    cout << s0.length() <<endl;

    // compare two str
    string s6 ="Aple";
    string s7 ="Orange";
    cout << s6.compare(s7) <<endl; //lwexiographically
    cout << s7.compare(s6) <<endl;

    //Operator
    if(s6 < s7){
        cout << s6 <<endl;
    }
    else{
        cout << s7 <<endl; 
    }

    // Find Substring
    string s8 = " I want to have an apple lemonade";
    int indx = s8.find("apple");
    cout << indx << endl;

    // reove a word
    string str = "apple";
    int len = str.length();
    cout << s8 <<endl;

    s8.erase(indx,len + 1);
    cout << s8 << endl;
    
    // Ittrate over each char of strng 
    for (int  i = 0; i < s8.length(); i++)
    {
        /* code */
        cout << s8[i] <<":";

    }

    // ITTRATORS
    for(auto it = s8.begin(); it!=s8.end();it++ ){
        cout << *it <<",";

    }
    cout << endl;

    // FOR EACH LOOP
    for(auto c:s8){
        cout<< c <<".";
    }
    






}