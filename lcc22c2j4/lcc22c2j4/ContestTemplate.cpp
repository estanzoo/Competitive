// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int NM = 1e7 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int dif[NM];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, q;
    cin >> n >> m >> q;
    memset(dif, 0, sizeof(dif));
    for (int i = 0, a, b; i < q; i++) {
        cin >> a >> b;
        dif[a]++;
        dif[b+1]--;
    }
    int ans = 0, curr = 0;
    for (int i = 1; i <= n; i++) {
        curr += dif[i];
        ans = max(ans, curr);
    }
    if (ans > m) cout << "TAKE A BREAK JAMES";
    else cout << ans;
    return 0;
}
/*
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, q;
    cin >> n >> m >> q;
    memset(dif, 0, sizeof(dif));
    for (int i = 0, a, b; i < q; i++) {
        cin >> a >> b;
        for (int j = a; j <= b; j++) {
            dif[j]++;
        }
    }
    int ans = 0, curr = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, dif[i]);
    }
    if (ans > m) cout << "TAKE A BREAK JAMES";
    else cout << ans;
    return 0;
}

*/