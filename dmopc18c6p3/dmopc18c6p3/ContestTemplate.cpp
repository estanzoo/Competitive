// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 2e5 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int root[MM];

int getRoot(int a) {
    if (a == root[a]) return a;
    return root[a] = getRoot(root[a]);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, num = 0;
    cin >> n >> m;
    loop(r, n) root[r + 1] = r + 1;
    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        int r1 = getRoot(a), r2 = getRoot(b);
        if (r1 == r2) num++;
        else root[r1] = r2;
    }
    if (num <= 1) cout << "YES";
    else cout << "NO";
    return 0;
}

