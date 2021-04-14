#include <bits/stdc++.h>
using namespace std;

string str;
getline(cin, str); // For reading complete line with spaces

stringstream ss(str);
vector<int> vec;
int x;
while (ss >> x)
{
    vec.push_back(x);

    if (ss.peek() == ' ')
        ss.ignore();
}

int arr[vec.size()];
copy(vec.begin(), vec.end(), arr);

int n = sizeof(arr) / sizeof(arr[0]);