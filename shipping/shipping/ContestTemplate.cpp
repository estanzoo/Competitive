// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 503;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pii;

struct node {
    int r, c, cost;
    bool operator<(node a) const {
        return cost > a.cost;
    }
};

int n, dangers[MM][MM], dis[MM][MM];

void dijkstra(int startR, int startC) {
    priority_queue <node> q;
    dis[startR][startC] = dangers[startR][startC];
    q.push({ startR, startC, dis[startR][startC] });
    while (!q.empty()) {
        int currNodeR = q.top().r;
        int currNodeC = q.top().c;
        int currNodeCost = q.top().cost;
        q.pop();
        for (int i = -1; i <= 1; i++){
            for (int j = -1; j <= 1; j++) {
                int cR = currNodeR + i;
                int cC = currNodeC + j;
                if (cR > 0 && cC > 0 && cR <= n && cC <= n) {
                    if (i != cR && j != cC) {
                        int cCost = dangers[currNodeR + i][currNodeC + j];
                        if (dis[cR][cC] > currNodeCost + cCost) {
                            dis[cR][cC] = currNodeCost + cCost;
                            q.push({ cR, cC, dis[cR][cC] });
                        }
                    }
                }
            }
        }
    }
}

int main() {
    
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= n; j++)
            dis[i][j] = INT_MAX;

    for (int i = 1; i<= n; i++) 
        for (int j = 1; j <= n; j++) {
            int a; cin >> a;
            dangers[i][j] = a;
        }
    dijkstra(1, 1);
    cout << dis[n][n];
    return 0;
}
