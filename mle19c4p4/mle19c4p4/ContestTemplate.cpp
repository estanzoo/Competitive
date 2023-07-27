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
    int n, maxLength = -1;
    cin >> n;
    cin.ignore(256, '\n');
    string curr, maxStr;
    getline(cin, curr);
    maxStr = curr;
    maxLength = maxStr.length();
    for (int i = 1; i < n; i++)
    {
        getline(cin, curr);
        if (curr.length() >= maxLength)
        {
            maxStr = curr;
            maxLength = curr.length();
        }
    }
    cout << maxStr;
    return 0;
}

