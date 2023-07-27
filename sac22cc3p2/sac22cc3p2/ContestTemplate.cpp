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
    int n;
    cin >> n;
    double ans1 = (5 + sqrt(25.0 - 48.0 * (1 - n))) / 24;
    double ans2 = (5 - sqrt(25.0 - 48.0 * (1 - n))) / 24;
    if (ans1 > 0.0)
        cout << setprecision(6) << fixed << ans1;
    else
        cout << setprecision(6) << fixed << ans2;
    return 0;
}

