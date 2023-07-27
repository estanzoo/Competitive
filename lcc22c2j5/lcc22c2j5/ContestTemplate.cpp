#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int NM = 1e5 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pii;
typedef pair<int, int> pi;

int n, k, m;
vector<int> adj[NM];
bool team[NM], vis[NM];
int players[NM], currTeam[NM];
unordered_map<int, int>jerseys;

int bfs(int start) {
    queue<int>q;
    q.push(start);
    vector<int> nums;
    nums.push_back(jerseys.at(start));
    int numAvail = 1;
    vis[start] = true;
    while (!q.empty()) {
        int curr = q.front(); q.pop();
        for (int c : adj[curr]) {
            if (vis[c]) continue;
            if (team[c]) numAvail++;
            vis[c] = true;
            nums.push_back(jerseys.at(c));
            q.push(c);
        }
    }
    sort(nums.begin(), nums.end(), greater<int>());
    int ans = 0;
    for (int i = 0; i < numAvail; i++) {
        ans += nums[i];
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k >> m;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        players[i] = a;
        jerseys.emplace(i, a);
    }
    for (int i = 1; i <= k; i++) {
        int a;
        cin >> a;
        team[a] = true;
        currTeam[i] = a;
    }
    for (int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int ans = 0;
    for (int i = 1; i <= k; i++) {
        if (!vis[currTeam[i]])
            ans += bfs(currTeam[i]);
    }
    cout << ans << "\n";
    return 0;
}