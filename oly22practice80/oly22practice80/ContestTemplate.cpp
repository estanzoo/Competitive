// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 200 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

char mat[MM][MM];
int dis[MM][MM];
bool vis[MM][MM];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, p, q, greatDis = 0;
    cin >> n >> m >> p >> q;
    queue <pi> que;
    for (int i = 1; i <= m; i++) {
        string a; cin >> a;
        for (int j = 1; j <= n; j++) {
            mat[i][j] = a[j - 1];
        }
    }
    que.push({ m-q+1, p });
    vis[m - q + 1][p] = true;
    dis[m - q + 1][p] = 0;
    while (!que.empty()) {
        pi curr = que.front(); que.pop();
        int r = curr.first, c = curr.second;
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                int cR = i + r, cC = j + c;
                if (cR >= 1 && cC >= 1 && cR <= m && cC <= n) {
                    if (mat[cR][cC] != '*' && !vis[cR][cC]) {
                        dis[cR][cC] = dis[r][c] + 1;
                        greatDis = max(dis[cR][cC], greatDis);
                        vis[cR][cC] = true;
                        que.push({ cR, cC });
                    }
                }
            }
        }
    }
    cout << greatDis;
    return 0;
}

