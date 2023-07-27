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
    int n, m;
    cin >> n >> m;
    int startX = 0, startY = 0, currX, currY;
    for (int i = 0; i < n; i++)
    {
        cin >> currX >> currY;
        startX += currX;
        startY += currY;
    }
    double slope = (startY*1.0 / startX*1.0);

    double dist = sqrt(pow(startX, 2) + pow(startY, 2));
    bool yes = true;
    for (int i = 0; i < m; i++)
    {
        cin >> currX >> currY;
        double currSlope = currY*1.0/currX*1.0;
        double currDist = sqrt(pow(currX, 2) + pow(currY, 2));
        if (currSlope == slope && currDist <= dist) {
            yes = false;
        }
        
    }
    if (yes)
        cout << "yes";
    else
        cout << "no";
    return 0;
}

