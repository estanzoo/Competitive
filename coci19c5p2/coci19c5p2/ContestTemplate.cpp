// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 502;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int n, curr;
ll k;
int mat[MM][MM], d[MM][MM];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    memset(mat, 0, sizeof(mat));
    memset(d, 0, sizeof(d));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> mat[i][j];
        }
    }
    int pre = 1, cur = 2; k--; d[1][2] = 1;
    while (true) {
        int next = mat[cur][pre];
        if (d[cur][next] > 0) {
            int cycle = d[pre][cur] - d[cur][next] + 1;
            k %= cycle;
        }
        if (k == 0) {
            cout << pre; return 0;
        }
        d[cur][next] = d[pre][cur] + 1;
        k--;
        pre = cur;
        cur = next;
    }
    return 0;
}

