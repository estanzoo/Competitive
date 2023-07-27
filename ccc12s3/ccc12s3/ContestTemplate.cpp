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
    unordered_map<int, int> freq;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (freq.find(a) != freq.end()) {
            freq[a] = freq[a] + 1;
        }
        else freq.emplace(a, 1);
    }
    int hi = -1, hi2 = -1;
    unordered_map<int, vector<int>> fin;
    for (auto c : freq) {
        if (fin.find(c.second) != fin.end()) {
            fin[c.second].push_back(c.first);
            if (c.second > hi) {
                hi2 = hi; hi = c.second;
            }
            else if (c.second > hi2) {
                hi2 = c.second;
            }
        }
        else {
            vector<int> a; a.push_back(c.first);
            fin.emplace(c.second, a);
            if (c.second > hi) {
                hi2 = hi; hi = c.second;
            }
            else if(c.second > hi2) {
                hi2 = c.second;
            }
        }
    }
    if (fin.at(hi).size() > 1) {
        vector<int> curr = fin.at(hi);
        sort(curr.begin(), curr.end()); cout << curr[curr.size() - 1] - curr[0];
    }
    else {
        vector<int> curr = fin.at(hi);
        vector<int> curr1 = fin.at(hi2);
        sort(curr1.begin(), curr1.end());
        cout << max(abs(curr1[0] - curr[0]), abs(curr1[curr1.size() - 1]- curr[0]));
    }
    return 0;
}

