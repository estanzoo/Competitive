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
    string city, ans;
    int temp, ansN;
    cin >> city >> temp;
    ans = city;
    ansN = temp;
    while (city.compare("Waterloo") != 0)
    {
        cin >> city >> temp;
        if (temp < ansN) {
            ansN = temp;
            ans = city;
        }
    }
    cout << ans;
    return 0;
}

