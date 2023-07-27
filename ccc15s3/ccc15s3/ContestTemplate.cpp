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
    int g, p, ans= 0; cin >> g >> p;
    set <int> avail; for (int i = g; i >=1; i--) avail.emplace(i*-1);
    for (int i = 0; i < p; i++) {
        int a; 
        bool found = false; 
        cin >> a;
        a *= -1;
        auto best = avail.lower_bound(a);
        if (best == avail.end()) break;
        avail.erase(best);
        ans++;

    }
    cout << ans;
    return 0;
}

