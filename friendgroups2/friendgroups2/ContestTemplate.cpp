// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e5 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int root[MM];

int getRoot(int a) {
    if (root[a] == a) return a;
    return root[a] = getRoot(root[a]);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        root[i] = i;
    }
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        int rootA = getRoot(a), rootB = getRoot(b);
        if (rootA == rootB) cout << "N" << endl;
        else { cout << "Y" << endl; root[rootA] = rootB; }
    }
    return 0;
}

