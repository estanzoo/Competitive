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
    vector <bool>yes;
    loop(26) { yes.push_back(false); }
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++){
        if (a[i] > 90) a[i] -= 32;
        yes [a[i] - 65] = true;
    }
    int ans = 0;
    for (int i = 0; i < 26; i++){
        if (!yes[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}

