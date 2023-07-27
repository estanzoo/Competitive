// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 2e6 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int ns[MM];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; 
    cin >> n >> m;
    memset(ns, 0, sizeof(ns));
    for (int i = 0, a, b; i < m; i++) {
        cin >> a >> b;
        ns[a]++;
    }
    for (int i = 1; i <= n; i++) {
        cout << ns[i] << endl;
    }
    return 0;
}

