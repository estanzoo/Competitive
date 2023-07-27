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

bool grid[27][27];
bool vis[27][27];

vector<int> a;

void func(int r, int c, int ind) {
    vis[r][c] = true;
    a[ind]++;
    if (!vis[r + 1][c] && grid[r + 1][c]) {
        func(r + 1,c, ind);
    }
    if (!vis[r - 1][c] && grid[r - 1][c]) {
        func(r - 1, c, ind);
    }
    if (!vis[r][c+1] && grid[r][c+1]) {
        func(r, c+1, ind);
    }
    if (!vis[r][c - 1] && grid[r][c - 1]) {
        func(r, c - 1, ind);
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, r, c; cin >> n>>  r >> c;
    for (int i = 1; i <= r; i++) {
        string s; cin >> s;
        for (int j = 1; j <= c; j++) {
            if (s[j] == '.') grid[i][j] = true;
        }
    }
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            
            if (grid[i][j] && !vis[i][j]) {
                a.push_back(0);
                int ind = a.size() - 1;
                func(i, j, ind);
            }
        }
    }
    sort(a.begin(), a.end(), greater<int>());
    int ans = 0;
    for (int i = 0; i < a.size(); i++) {
        if (n - a[i] >= 0) {
            n -= a[i];
            ans++;
        }
        else break;
    }
    if (ans != 1) cout << ans << " rooms, " << n << " square metre(s) left over";
    else cout << ans << " room, " << n << " square metre(s) left over";
    return 0;
}

