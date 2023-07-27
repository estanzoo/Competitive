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

int dp[]

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int r, c; cin >> r >> c;
    vector<int> mask;
    for (int i = 0; i < 1 << c - 2; i++) {
        if ((i & i >> 1) == 0 && (i & i >> 2) == 0) {
            mask.push_back(i);
        }
    }
    vector<vector<int>> lst;
    
    return 0;
}

