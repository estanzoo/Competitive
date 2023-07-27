// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e6 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k; cin >> n >> k;
    vector<pi> a; vector<int> team;
    team.resize(n);
    for (int i = 0; i < n; i++) {
        int x; cin >> x; a.push_back({ x,i });
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        team[a[i].second] = i / k;
    }
    vector<int> arr;
    for (int x : team) {
        if (arr.empty() || x >= arr.back()) {
            arr.push_back(x);
        }
        else {
            *upper_bound(arr.begin(), arr.end(), x) = x;
        }
    }
    cout << n - arr.size();
    return 0;
}

