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
    int ans = 0;
    for (int i = 0; i < 100; i++) {
        unordered_set<char> a;
        unordered_set<char> b;
        unordered_set<char> c;
        string curr;
        cin >> curr;
        for (int j = 0; j < curr.length(); j++) {
            a.emplace(curr[j]);
        }
        cin >> curr;
        for (int j = 0; j < curr.length(); j++) {
            b.emplace(curr[j]);
        }
        cin >> curr;
        for (int j = 0; j < curr.length(); j++) {
            c.emplace(curr[j]);
        }
        for (auto d : a) {
            if (b.find(d) != b.end() && c.find(d) != c.end()) {
                if (d <= 90) {
                    ans += d - 38;
                }
                else {
                    ans += d - 96;
                }
            }
        }
    }
    cout << ans;
    return 0;
}

