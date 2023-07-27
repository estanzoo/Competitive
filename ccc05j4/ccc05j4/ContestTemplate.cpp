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

bool vis[20][20];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x, y, a, b, steps; cin >> x >> y >> a >> b >> steps;
    int curX = 1, curY = 1;
    curX += a;
    for (int i = curX, j = curY; i <= x && j <= y; ) {
        vis[i][j] = true;
        if (i - 1 > 0 && !vis[i-1][j])
    }
    return 0;
}

