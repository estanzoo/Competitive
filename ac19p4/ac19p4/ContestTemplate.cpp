// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 2e3 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int x[MM], y[MM];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, ans = 0; cin >> n;
    set<pi> a;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
        a.insert({ x[i], y[i] });
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (a.count({ x[i], y[j] }) && a.count({ x[j], y[i] })) {
                ans = max(ans, abs(x[i]-x[j]) * abs( y[i] - y[j] ));
            }
        }
    }
    cout << ans << endl;
    return 0;
}

