#include <bits/stdc++.h>
using namespace std;
int main() {
	//n = number of elements, m = greatest value for each subarray
	int n, m; cin >> n >> m;
	vector<int> nums;
	//taking in input for the array
	for (int i = 0; i < n; i++) {
		int a; cin >> a; nums.push_back(a);
	}
	int left = 0, right = 0, cur = 0, ans = 0;
	//check if either point has reached the end, which means the the subarray cannot grow any further.
	while (left < n && right < n) {
		//check if the faster moving pointer has reached the end, if it has, the subarray cannot grow any further.
		while (right < n) {
			//adding the current element fo the running sum and advancing the right pointer.
			cur += nums[right];
			right++;
			//check if this new element caused the running sum to exceed m. If it has, we must undo this addition.
			if (cur >= m) {
				//moving the right pointer back to its original position before the addition.
				right--;
				//removing it from the running sum.
				cur -= nums[right];
				break;
			}
		}
		//since we exited the while loop above, we can conclude that the current running sum is the greatest possible length of the subarray while keeping the left (slow-moving) pointer stationary, meaning we can now update our answer if it has changed, and we must now advance the left pointer to the right by one, thus removing the leftmost element.
		ans = max(ans, right - left);
		cur -= nums[left];
		left++;
	}
	cout << ans;
	return 0;
}

