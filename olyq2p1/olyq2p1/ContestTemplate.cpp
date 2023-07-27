// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e6 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;
vector<int> nums;
int n, m, lo, hi;
bool yes(int mid) {
    int last = nums[0], count = 1;
    for (int i = 1; i < n; i++) {
        if (nums[i] - last >= mid) {
            last = nums[i]; count++;
        }
    }
    return count >= m;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a; nums.push_back(a);
    }
    sort(nums.begin(), nums.end());
    int lo = 1, hi = nums[n - 1], ans;
    while (true) {
        if (lo > hi) break;
        int mid = (lo + hi) / 2;
        if (yes(mid)) {
            ans = mid;
            lo = mid + 1;
        }
        else hi = mid - 1;
    }
    cout << ans;
    return 0;
}

