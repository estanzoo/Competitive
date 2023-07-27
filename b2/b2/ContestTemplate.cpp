// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

string reverse(string n)
{
    string rev = "";
    for (int i = n.length() - 1; i >= 0; i--)
    {
        rev += n[i];
    }
    return rev;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        int ans = stoi(reverse(a), nullptr, 10) + stoi(reverse(b), nullptr, 10);
        cout << stoi(reverse(to_string(ans)),nullptr,10) << "\n";
    }
    return 0;
}

