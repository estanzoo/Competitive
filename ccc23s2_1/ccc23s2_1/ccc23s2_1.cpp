#include <bits/stdc++.h>

using namespace std;


const int MM = 5e3+3;

int m[MM];
//[mid][size]
int ans[MM][MM]; //has mid
int finalA[MM]; //size
int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> m[i];
		finalA[i] = INT_MAX;
	}
	//start from all mid
	for (int i = 1; i <= n; i++) {
		int l = i - 1;
		int r = i + 1;
		int currAns = 0;
		//odd case first
		while (l >= 1 && r <= n) {
			ans[i][r-l+1] = abs(m[l] - m[r]);
			currAns += abs(m[l] - m[r]);
			
			finalA[r - l+1 ] = min(finalA[r-l+1], currAns);
			r++;
			l--;
		}
		//even mid (mid = current -1 and current)
		currAns = 0;
		 l = i - 1;
		 r = i;
		 while(l >= 1 && r <= n) {
			 ans[i][r - l+1 ] = abs(m[l] - m[r]);
			 currAns += abs(m[l] - m[r]);
			finalA[r - l+1] = min(finalA[r - l+1], currAns);
			r++;
			l--;
		}
	}
	cout << 0 << " ";
	for (int i = 2; i <= n; i++) {
		cout << finalA[i] << " ";
	}
	/*
	//beginning
	for (int i = 1; i <= n; i++) {
		//size
		for (int j = 1; j + i <= n; j++) {
			ans[(i + j + i) / 2][j + 1] += abs(m[i] - m[j + i]);
		}
	}
	//loop all midpoints
	for (int i = 1; i <= n; i++) {
		int fA = INT_MAX;
		int currAns = 0;
		//loop all sizes of midpoints and add
		for (int j = 2; j <= n; j++) {
			currAns += ans[i][j];
			finalA[j] = min(finalA[j], currAns);
			
		}
	}
	
	//array of size n
	
	/*
	for(int i = 2; i<= n; i++){
		
		int ans = INT_MAX;
		//loop startin point
		for (int j = 1; j + i <= n; j++) {
			int currAns = 0;
			for (int k = j; k <= (i + j) / 2; k++) {
				currAns += abs(m[k] - m[k + i]);
				cout << "Size " << i << ", Start " << j << ", ans " << abs(m[k] - m[k + i]) << "\n";
			}
			ans = min(ans, currAns);
		}
		cout << ans << " ";
	}
	//cout << ans;*/
	//size
	/*
	cout << 0 << " ";
	for (int i = 1; i < n; i++) {
		//start
		int ans = INT_MAX;
		for (int j = 1; j + i <= n; j++) {
			//new array = from j to j+i;
			int currAns = 0;
			for (int k = 0;2*k <= i ; k++) {
				currAns += abs(m[j+k]- m[j + i - k]);
			}
			ans = min(currAns, ans);
		}
		cout << ans << " ";
	}
	*/
}
