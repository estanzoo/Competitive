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

int grid[99][100];
int n = 99, m = 99;

int check(int a, int r, int c) {
    int left = 0;
    for (int i = c-1; i >= 0; i--) {
        left++;
        if (grid[r][i] >= a) {
            break;
        }
    }
    int right = 0;
    for (int i = c+1; i < m; i++) {
        right++;
        if (grid[r][i] >= a) {
            break;
        }
    }
    int bottom = 0;
    for (int i = r+1; i < n; i++) {
        bottom++;
        if (grid[i][c] >= a) {
            break;
        }
    }
    int down = 0;
    for (int i = r-1; i >=0; i--) {
        down++;
        if (grid[i][c] >= a) {
            break;
        }
    }
    return bottom*down*right*left;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string curr;
    for (int i = 0; i < n; i++) {
        getline(cin, curr);
        for (int j = 0; j < m; j++) {
            grid[i][j] = curr[j] - 48;
        }
    }
    int ans = 0;
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < m - 1; j++) {
            ans = max(ans, check(grid[i][j], i, j));
        }
    }
    cout << ans;
    return 0;
}

