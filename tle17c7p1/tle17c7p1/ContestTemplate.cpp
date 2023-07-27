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
    vector <ll> x;
    vector <ll> y;
    unordered_map<ll, ll> planets;
    cin >> n;
    x.push_back(0);
    y.push_back(0);
    planets.emplace(0, 0);

    for (int i = 1; i < n; i++)
    {
        ll comp, currX, currY;
        cin >> comp >> currX >> currY;
        currX += x[comp - 1];
        currY += y[comp - 1];
        x.push_back(currX);
        y.push_back(currY);
    }
    for (int i = 0; i < n; i++)
    {
        planets.emplace(x[i], y[i]);
    }
    cout << planets.size();
    return 0;
}

