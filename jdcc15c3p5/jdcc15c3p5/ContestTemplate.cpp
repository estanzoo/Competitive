// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool findFunc(const vector<pair<int, int>>& a, int target)
{
    for (auto& c : a)
    {
        if (c.first == target) return true;
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a;
    int n, m;
    int l, r, v;
    cin >> a;
    for (int x = 0; x < a; x++)
    {
        vector<pair<int, int>> diffs;
        cin >> n >> m;
        for (int i = 0; i < m; i++)
        {
            cin >> l >> r >> v;
            l--;
            diffs.push_back(make_pair(l, v));
            diffs.push_back(make_pair(r+l, -v));
        }
        sort(diffs.begin(), diffs.end(), [] (const pair <int, int>& lhs, const pair<int, int>& rhs){
            return lhs.first < rhs.first;
            });
        ll max = 0;
        int ans = 0;
        ll curr = 0;
        for (int i = 0; i < diffs.size(); i++)
        {
            curr += diffs[i].second;
            if (curr >= max) {
                max = curr;
                ans = diffs[i].first;
            }
        }
        cout << ans + 1 << "\n";
    }
    return 0;
}

