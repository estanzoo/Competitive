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
    int n, q;
    cin >> n >> q;
    vector <bool> rows(n+1, false);
    vector<bool> columns(n+1, false);
    string curr;
    for (int i = 1; i <= n; i++)
    {
        cin >> curr;
        for (int j = 1; j <= q; j++)
        {
            if (curr[j - 1] == 'X')
            {
                rows[i] = true;
                columns[j] = true;
            }
        }
    }
    int a;
    cin >> a;
    int currR, currC;
    for (int i = 0; i < a; i++)
    {
        cin >> currR >> currC;
        if (rows[currC] || columns[currR])
            cout << 'Y' << "\n";
        else
            cout << 'N' << "\n";
    }
    return 0;
}

