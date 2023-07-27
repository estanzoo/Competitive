#include <bits/stdc++.h>

using namespace std;


const int MM = 2e5 + 3;

int tile[3][MM];
int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> tile[1][i];
	}
	for (int i = 1; i <= n; i++) {
		cin >> tile[2][i];
	}
	int ans = 0;
	//if 
	for (int i = 1; i <= n; i++) {
		if (tile[1][i] == 1) {
			ans += 3;
			if (tile[1][i - 1] == 1) {
				ans -= 2;
			}
		}
		
	}
	for (int i = 1; i <= n; i++) {
		if (tile[2][i] == 1) {
			ans += 3;
			if (tile[2][i - 1] == 1) {
				ans -= 2;
			}
			if (tile[1][i] == 1 && i % 2 == 1) {
				ans -= 2;
			}
		}
		
	}
	cout << ans;
}