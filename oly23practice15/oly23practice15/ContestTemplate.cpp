// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1003;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

bool vis[MM][MM];
int grid[MM][MM];
int r, c;

void dfs(int x, int y) {
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (x + i <= 1003 && j + y <= 1003 && x + i >= 1 && y + j >= 1 && !vis[x+i][y+j] && grid[x+i][y+j] > 0) {
                vis[x + i][y + j] = true;
                dfs(x + i, y + j);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num = 0;
    cin >> r >> c;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            int a; cin >> a;
            grid[i][j] = a;
            vis[i][j] = false;
        }
    }
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (!vis[i][j] && grid[i][j] > 0) {
                vis[i][j] = true;
                num++;
                dfs(i, j);
            }
        }
    }
    cout << num;
    return 0;
}

