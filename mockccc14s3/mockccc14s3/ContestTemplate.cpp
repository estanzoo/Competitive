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
    vector<vector<int>> a;
    int n, c, q, curr;
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        vector<int> b;
        for (int j = 0; j < c; j++) {
            cin >> curr;
            b.push_back(curr);
        }
        a.push_back(b);
    }
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> curr;
        curr--;
        map<vector<int>, int> indexes;
        for (int j = 0; j < n; j++)
        {
            indexes.emplace(a[j], j);
        }
        sort(a.begin(), a.end(), [&curr, &indexes](auto& lhs, auto& rhs) {
            return (lhs[curr] < rhs[curr] || lhs[curr] == rhs[curr] && indexes.at(lhs) < indexes.at(rhs));
            });
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (j < c - 1) cout << a[i][j] << " ";
            else cout << a[i][j] << "\n";
        }
    }
    return 0;
}

