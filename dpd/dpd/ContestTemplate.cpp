#include <bits/stdc++.h>
using namespace std;
const int MM = 1e5 + 10;
#define ll long long
ll dp[MM];
int w[MM];
ll v[MM];

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = m; j >= w[i]; j--) {
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }
    cout << dp[m];
    return 0;
}
