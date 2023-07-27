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
    int n, m, c, min = 1000000001;
    cin >> n >> m;
    vector <int> first, second;
    for (int i = 0; i < n; i++) {
        cin >> c; first.push_back(c);
    }
    for (int i = 0; i < m; i++) {
        cin >> c; second.push_back(c);
    }
    sort(first.begin(), first.end());
    sort(second.begin(), second.end());
    int firstC = 0, secondC = 0;
    while (true)
    {
        if (firstC == n || secondC == m)
        {
            break;
        }
        int curr = abs(first[firstC] - second[secondC]);
        if (curr < min) min = curr;
        if (second[secondC] > first[firstC])firstC++;
        else if (first[firstC] > second[secondC])secondC++;
        else break;
    }
    cout << min;
    return 0;
}

