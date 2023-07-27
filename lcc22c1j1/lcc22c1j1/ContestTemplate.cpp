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
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    if (a >= b) ans = a - b + 1;
    if (a >= c && a - c +1 < ans) ans = a - c + 1;
    cout << ans;
    return 0;
}

