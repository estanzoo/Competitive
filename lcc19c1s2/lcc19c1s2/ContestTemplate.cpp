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
    int n, curr;
    cin >> n;
    vector <int> max;
    for (int i = 0; i < n; i++) max.push_back(INT_MAX);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cin >> curr;
            if (curr < max[j])
                max[j] = curr;
        }
        for (int j = 0; j < 2*(n - i); j++)
        {
            cin >> curr;
            if (curr < max[i])
                max[i] = curr;
        }
        for (int j = i-1; j >= 0; j--)
        {
            cin >> curr;
            if (curr < max[j])
                max[j] = curr;
        }
    }
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cin >> curr;
            if (curr < max[j])
                max[j] = curr;
        }
        for (int j = 0; j < 2 * (n - i); j++)
        {
            cin >> curr;
            if (curr < max[i])
                max[i] = curr;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            cin >> curr;
            if (curr < max[j])
                max[j] = curr;
        }
    }
    ll sum = 0;
    for (int i = 0; i < n ; i++)
    {
        sum += max[i];
    }
    cout << sum;
    return 0;
}

