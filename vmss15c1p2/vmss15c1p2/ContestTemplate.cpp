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

int n, q, ans = 0;
char grid[102][102];
bool vis[102][102];

void markMap(int r, int c) {
    vis[r][c] = true;
    if (grid[r + 1][c] == '.' && !vis[r + 1][c])
        markMap(r + 1, c);
    if (grid[r][c+1] == '.' && !vis[r][c+1])
        markMap(r, c+1);
    if (grid[r -1][c] == '.' && !vis[r - 1][c])
        markMap(r - 1, c);
    if (grid[r][c-1] == '.' && !vis[r ][c-1])
        markMap(r, c-1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    memset(vis, false, sizeof(vis));
    memset(grid, '!', sizeof(grid));
    for (int i = 1; i <= n; i++) {
        string curr; cin >> curr;
        for (int j = 0; j < q; j++) {
            grid[i][j + 1] = curr[j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= q; j++) {
            if (grid[i][j] == '.' && !vis[i][j]) {
                ans++;
                markMap(i, j);
            }
        }
    }
    cout << ans << "\n";
    return 0;
}

