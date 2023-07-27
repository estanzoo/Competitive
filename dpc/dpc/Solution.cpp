#include "Solution.h"
#include <bits/stdc++.h>

using namespace std;

const int MM = 1e5 + 3;
int n; 
int dp[MM][3], cookies[MM][3];

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> cookies[i][0] >> cookies[i][1] >> cookies[i][2];
	}
	dp[0][0] = cookies[0][0];
	dp[0][1] = cookies[0][1];
	dp[0][2] = cookies[0][2];
	for (int i = 1; i < n; i++) {
		dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + cookies[i][0];
		dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + cookies[i][1];
		dp[i][2] = max(dp[i-1][1], dp[i-1][0]) + cookies[i][2];
	}
	int ans = max(dp[n - 1][0], dp[n - 1][1]);
	ans = max(ans, dp[n - 1][2]);
	cout << ans << "\n";
}