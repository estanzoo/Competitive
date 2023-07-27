#include <bits/stdc++.h>

using namespace std;

const int MM = 1e5 + 3;

int  cost[MM], dp[MM], n, k;

int find(int a) {
	if (a == 1) return 0;
	if (dp[a] != INT_MAX) return dp[a];
	for (int i = 1; i <= k; i++) {
		if (a - i >= 1) {
			dp[a] = min(dp[a], find(a - i) + abs(cost[a - i] - cost[a]));
		}
	}
	return dp[a];
}

int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++) cin >> cost[i];
	for (int i = 1; i < MM; i++) dp[i] = INT_MAX;
	cout << find(n);
	//cout << "yes";
}