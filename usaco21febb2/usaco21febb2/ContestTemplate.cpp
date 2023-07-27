// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e3 + 2;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;


int grid[MM][MM];
bool gridB[MM][MM];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, ans; cin >> n;
    ans = 0;
    memset(grid, false, sizeof(grid));
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        gridB[a][b] = true;
        if (grid[a][b] == 3) ans++;
        if (a > 0) {
            grid[a - 1][b]++;
            if (gridB[a - 1][b]) {
                if (grid[a - 1][b] == 3) ans++;
                else if (grid[a - 1][b] == 4) ans--;
            }
        }
        if (b > 0) {
            grid[a][b - 1]++;
            if (gridB[a][b-1]) {
                if (grid[a][b - 1] == 3) ans++;
                else if (grid[a][b - 1] == 4) ans--;
            }
        }
        if (a < 1000) {
            grid[a + 1][b]++;
            if (gridB[a + 1][b]) {
                if (grid[a + 1][b] == 3) ans++;
                else if (grid[a + 1][b] == 4) ans--;
            }
        }
        if (b < 1000) {
            grid[a][b + 1]++;
            if (gridB[a][b + 1]) {
                if (grid[a][b + 1] == 3) ans++;
                else if (grid[a][b + 1] == 4) ans--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

