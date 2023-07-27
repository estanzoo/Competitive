// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, events, max = 0;
    vector <int> houses;
    cin >> n >> events;
    for (int i = 0; i < n; i++)
    {
        houses.push_back(0);
    }
    for (int i = 0; i < events; i++)
    {
        int house1, house2, amt;
        cin >> house1 >> house2 >> amt;
        house1--;
        house2--;
        houses[house1] -= amt;
        if (houses[house1] < 0)
            houses[house1] = 0;
        houses[house2] += amt;
        if (houses[house2] > max)
            max = houses[house2];
    }
    cout << max;
    return 0;
}

