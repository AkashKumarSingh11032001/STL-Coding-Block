#include <bits/stdc++.h>
using namespace std;

class Car{
    public:
    string name;
    int x,y;
    Car(){

    }
    Car(string n, int x,int y){
        name = n;
        this->x = x;
        this->y = y;
    }
    int distance(){
        return x*x + y*y;
    }
};

bool compare(Car A,Car B){
    int da = A.distance();
    int db = B.distance();
    if(da == db){
        return A.length() < B.length();
    }

}
int main(){

    int n;
    cin >> n;
    vector<Car> v;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int x,y;
        string name;
        cin >>name >> x >>y;
        Car temp(name,x,y);
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),compare);
    for(auto i:v){
        cout << i.first <<","<<i.second<<endl;
    }
}