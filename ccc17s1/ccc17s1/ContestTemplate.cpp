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
    int n, curr, high = 0;
    ll fSum = 0, sSum = 0;
    vector <int> first;
    vector <int> second;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        first.push_back(curr);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        second.push_back(curr);
    }
    for (int i = 0; i < n; i++)
    {
        fSum += first[i];
        sSum += second[i];
        if (fSum == sSum)
            high = i + 1;
    }
    cout << high << "\n";
    return 0;
}

