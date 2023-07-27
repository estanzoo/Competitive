// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e5 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int roots[MM], oPro[MM];
set<int> pros [MM];

int getRoot(int a) {
    if (roots[a] == a) return a;
    return roots[a] = getRoot(roots[a]);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        int a; cin >> a;
        roots[i] = i;
        pros[i].emplace(a);
        oPro[i] = a;
    }
    for (int x = 0; x < q; x++) {
        char c; cin >> c;
        if (c == 'B') {
            int f, t; cin >> f >> t;
            int r1 = getRoot(f), r2 = getRoot(t);
            if (r1 != r2) {
                if (pros[r1].size() >= pros[r2].size()) {
                    roots[r2] = r1;
                    pros[r1].insert(pros[r2].begin(), pros[r2].end());
                }
                else {
                    roots[r1] = r2;
                    pros[r2].insert(pros[r1].begin(), pros[r1].end());
                }
            }
        }
        if (c == 'T') {
            int f; cin >> f;
            int r = getRoot(f);
            set<int>::iterator ans = pros[r].upper_bound(oPro[f]);
            if (ans == pros[r].end()) cout << -1 << "\n";
            else cout << *ans << "\n";
        }
    }
    return 0;
}

