// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include<unordered_set>
using namespace std;

#define ll long long
#define loop(x) for (int z = 0; z < x; z++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q, ans = 0, num;
    string curr;
    unordered_set<string> items;
    cin >> n >> q;
    loop(n)
    {
        cin >> curr; items.emplace(curr);
    }
    loop(q)
    {
        cin >> num;
        bool good = true;
        for (int i = 0; i < num; i++)
        {
            cin >> curr;
            if (items.find(curr) == items.end())
            {
                good = false;
            }
        }
        if (good) ans++;
    }
    cout << ans;
    return 0;
}

