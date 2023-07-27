// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b, ans = 0; cin >> a >> b;
    string n;
    cin >> n;
    int alph[26] = {0};
    for (int i = 0; i < n.length(); i++)
    {
        alph[n[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        ans += alph[i]/b;
    }
    cout << ans;
    return 0;
}

