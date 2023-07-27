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
    double max = 0.0;
    int n, currTime, currP;
    vector < pair<int, int >> a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> currTime >> currP;
        a.push_back(make_pair(currTime, currP));
    }
    sort(a.begin(), a.end(), [](auto& lhs, auto& rhs) {
        return (lhs.first < rhs.first);
        });
    for (int i = 0; i < n - 1; i++)
    {
        double curr = abs(a[i + 1].second - a[i].second) * 1.0 / (a[i + 1].first - a[i].first);
        if (curr > max)
        {
            max = curr;
        }
    }
    cout << fixed << setprecision(1) << max;
    return 0;
}

