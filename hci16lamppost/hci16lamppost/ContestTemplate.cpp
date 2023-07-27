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

int da[MM];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, c; cin >> n >> c;
    for (int i = 0; i < c; i++) {
        int a, b; cin >> a >> b;
        da[a]++; da[b + 1]--;
    }
    int curr = 0, ans = 0, ansI;
    for (int i = 1; i <= n; i++) {
        curr += da[i];
        if (curr >= ans) {
            ansI = i;
            ans = curr;
        }
    }
    cout << ansI;
    return 0;
}

