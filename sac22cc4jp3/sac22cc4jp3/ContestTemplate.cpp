// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    const double pi = 3.14159265358979323846;
    int n;
    double a;
    double currAns = INT_MAX;
    int index = -1;
    cin >> n >> a;
    for (int i = 0; i < n; i++)
    {
        double currX, currY;
        cin >> currX >> currY;
        double angle = atan2(currY, currX) * 180.0 / pi;
        if (abs(angle - a) < abs(currAns - a)) {
            currAns = angle;
            index = i + 1;
        }
    }
    cout << index;
    return 0;
}

