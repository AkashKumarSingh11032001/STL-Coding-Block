#include <bits/stdc++.h>
using namespace std;

// Tokenization : breaking string into list of char

int main(){

    char str[100] = "Todaay is a rainy day";

    //STEP's
    char *ptr = strtok(str," ");

    cout << ptr <<endl;
}
