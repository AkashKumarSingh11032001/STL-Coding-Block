#include <bits/stdc++.h>
using namespace std;

// Tokenization : breaking string into list of char

char *mystrtok(char *s, char delm)
{
    //string s and delimeter delm

    static char *input = NULL; // help to maintain the postion
    if (s != NULL)
    {
        input = s;
    }

    // start extracting token and store in new array
    char *output = new char[strlen(input) + 1];
    int i = 0;
    for (; input[i] != '\0'; i++)
    {
        if (input[i] != delm)
        {
            output[i] = input[i];
        }
        else
        {
            output[i] = '\0';
            input += i + 1;
            return output;
        }
    }
}
int main()
{

    char str[100] = "Todaay is a rainy day";

    char *ptr = mystrtok(str, " ");
    cout << ptr << endl;

    while (ptr != NULL)
    {
        /* code */
        char *ptr = strtok(NULL, " ");
        cout << ptr << endl;
    }
}
