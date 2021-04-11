#include <bits/stdc++.h>
using namespace std;

// Tokenization : breaking string into list of char

int main(){

    char str[100] = "Todaay is a rainy day";

   
    char *ptr = strtok(str," "); 
   
    cout << ptr <<endl; // out: Todaay

    // char *ptr = strtok(NULL," ");
    // cout << ptr <<endl;  // out: is

    while (ptr != NULL) // for geeting rest of the word
    {
        /* code */
        char *ptr = strtok(NULL," ");
        cout << ptr <<endl;
        
    }
    
    
}
