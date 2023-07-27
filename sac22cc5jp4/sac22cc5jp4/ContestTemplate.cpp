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

int n;
vector<int>adj[MM];
int in[MM];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        in[i] = a;
        for (int j = 0; j < a; j++) {
            int b;
            cin >> b;
            adj[b].push_back(i);
        }
    }
    queue <int> q;
    vector<int> ans;
    for (int i = 1; i <= n; i++) if (in[i] == 0) q.push(i);
    while (!q.empty()) {
        int curr = q.front(); q.pop();
        ans.push_back(curr);
        for (int c : adj[curr]) {
            in[c]--;
            if (in[c] == 0) q.push(c);
        }
    }
    cout << ans[0];
    for (int i = 1; i < n; i++) {
        cout << " " << ans[i];
    }
    cout << endl;
    return 0;
}

