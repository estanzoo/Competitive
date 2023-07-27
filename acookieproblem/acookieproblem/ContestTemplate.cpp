#include <bits/stdc++.h>

using namespace std;
const int MM = 1e5 + 3;

int dp[MM];

int main() {
	ios::sync_with_stdio;
	cin.tie(0);
	vector<int> cookies;
	int n; cin >> n;
	cookies.push_back(0);
	for (int i = 0; i < n; i++){
		int a; cin >> a; cookies.push_back(a);
	}
	dp[0] = 0;
	dp[1] = cookies[1];
	for (int i = 2; i <= n; i++) {
		dp[i] = max(dp[i - 1], dp[i - 2] + cookies[i]);
	}
	cout << dp[n];
	return 0;
}