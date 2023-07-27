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
    int n, count = 0;
    vector<int> builds;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        builds.push_back(c);
        count += c + 1;
    }
    count += builds[0]*2;
    for (int i = 1; i < n; i++)
    {
        if (builds[i] > builds[i - 1])
            count += builds[i] + (builds[i] - builds[i - 1]);
        else
            count += builds[i];

    }
    cout << count;
    return 0;
}

