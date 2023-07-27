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


int n, m;
vector<int> l, r;

bool check(int lim) {
    int pairs = 0;
    for (int i = 0, j = 0; i < n && j < m;) {
        if (abs(l[i] - r[j]) <= lim) {
            pairs++; i++; j++;
        }
        else if (l[i] < r[j])i++;
        else j++;
    }
    return pairs == min(m, n);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) { int a; cin >> a; l.push_back(a); }
    for (int i = 0; i < m; i++) { int a; cin >> a; r.push_back(a); }
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());
    int lo = 0, hi = (int)1e9, ans = 0;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (check(mid)) { ans = mid; hi = mid - 1; }
        else lo = mid + 1;
    }
    cout << ans;
    return 0;
}

//1 2 6 7 10
// 3 6 9 11 12