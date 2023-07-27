// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int amt;
    cin >> amt;
    if (amt > 1)
        cout << amt << " cents requires ";
    else
        cout << amt << " cent requires ";
    int ans[4] = {0,0,0,0};
    int val[4] = { 25, 10, 5, 1 };
    string names[4] = { "quarter", "dime", "nickel", "cent" };
    int last = 0;
    for (int i = 0; i < 4; i++)
    {
        ans[i] += amt / val[i];
        amt -= ans[i] * val[i];
        if (ans[i] > 0)
            last = i;
    }
    int counter = 0;
    for (int i = 0; i < 4; i++)
    {
        if (ans[i] == 1)
        {
            cout << ans[i] << " " << names[i];
            if (i == last)
                cout << '.';
            else
                cout << ", ";
        }
        else if (ans[i] > 1)
        {
            cout << ans[i] << " " << names[i] << 's';
            if (i == last)
                cout << '.';
            else
                cout << ", ";
        }
    }
    return 0;
}

