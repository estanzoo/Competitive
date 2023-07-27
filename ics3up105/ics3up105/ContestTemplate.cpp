// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    double min = INT_MAX, max = -1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int curr;
        cin >> curr;
        if (curr > max)
            max = curr;
        if (curr < min)
            min = curr;
    }
    cout << setprecision(4) << fixed << max / min;
    return 0;
}

