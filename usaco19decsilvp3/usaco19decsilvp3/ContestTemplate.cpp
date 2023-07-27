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

int n, m, roots[MM];
string s;
#define endl "\n";
char c;
int getRoot(int a) {
    if (a == roots[a]) return a;
    return roots[a] = getRoot(roots[a]);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> s;
    for (int i = 1; i <= n; i++) roots[i] = i;
    for (int i = 1, u, v; i < n; i++) {
        cin >> u >> v;
        if (s[u - 1] == s[v - 1]) roots[getRoot(u)] = getRoot(v);
    }
    for (int i = 1, u, v; i <= m; i++) {
        cin >> u >> v >> c;
        if (s[u - 1] == c || s[v - 1] == c || getRoot(u) != getRoot(v)) cout << 1;
        else cout << 0;
    }
    cout << endl;
    return 0;
}

