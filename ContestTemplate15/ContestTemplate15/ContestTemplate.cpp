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
    int m, n, k;
    cin >> m >> n >> k;
    vector <int> r(m, 0);
    vector <int> c(n, 0);
    char curr;
    int a;
    for (int i = 0; i < k; i++)
    {
        cin >> curr >> a;
        a--;
        if (curr == 'R')
        {
            r[a]++;
        }
        else
        {
            c[a]++;
        }
    }
    ll count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((r[i] + c[j]) % 2 != 0)
                count++;
        }
    }
    cout << count;
    return 0;
}

