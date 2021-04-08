#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b)
{
    return a <= b; // decreasing order and for incresing order reverse return (a < b)
}

int main()
{

    // India Money
    int money[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int n = sizeof(money) / sizeof(int_fast32_t);

    int user_money = 168;
    //cin >> user_money;

    while (user_money > 0)
    {
        /* code */
        if(user_money == 0){
            return user_money;
        }
        int lb = lower_bound(money, money + n, user_money, compare) - money - 1;
        int pick_money = money[lb];
        cout << pick_money << ",";
        user_money -= pick_money;
    }
    return 0;
}