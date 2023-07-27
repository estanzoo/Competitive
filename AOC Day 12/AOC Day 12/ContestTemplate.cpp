// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//a = 97
//z = 122
#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 2e2 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int grid[MM][MM], dis[MM][MM];
bool vis[MM][MM];
pi dest, start;
pi dir[4] = { {1,0}, {-1,0}, {0, 1}, {0, -1} };
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //cout << 'z' - 97;
    vector<pi>as;
    for (int i = 1; i <= 41; i++) {
        string a;  getline(cin, a);
        for (int j = 0; j < a.length(); j++) {
            grid[i][j + 1] = a[j] - 97;
            if (a[j] == 'E') { grid[i][j + 1] = 25; dest = { i, j + 1 }; }
            if (a[j] == 'S') {
                grid[i][j + 1] = 0; as.push_back({i, j+1});
            }
            if (a[j] == 'a')as.push_back({ i, j+1 });
        }
    }
    int low = INT_MAX;
    for (int i = 0; i < as.size(); i++) {
        memset(vis, false, sizeof(vis));
        memset(dis, 0, sizeof(dis));
        queue<pi> q;
        start = { as[i].first, as[i].second };
        q.push(start);
        vis[start.first][start.second] = true;
        dis[start.first][start.second] = 0;
        bool reached = false;
        while (!q.empty()) {
            pi curr = q.front(); q.pop();
            for (int i = 0; i < 4; i++) {
                int currR = curr.first + dir[i].first;
                int currC = curr.second + dir[i].second;
                if ((currR >= 1) && (currC >= 1) && (currR <= 173) && (currC <= 173)) {
                    if ((grid[currR][currC] <= grid[curr.first][curr.second] + 1) && !vis[currR][currC]) {
                        vis[currR][currC] = true;
                        dis[currR][currC] = dis[curr.first][curr.second] + 1;
                        if ((currR == dest.first) && (currC == dest.second)) {
                            reached = true;
                            if (dis[dest.first][dest.second] < low) low = dis[dest.first][dest.second];
                            break;
                        }
                        q.push({ currR, currC });
                    }
                }
            }
            if (reached) break;
        }
    }
    cout << low;
    return 0;
}

