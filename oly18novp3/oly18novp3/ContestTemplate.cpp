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

ll n, m;
vector<ll> nums;
bool check(int max) {
    int currNum = 0, currElements = 1; 
    for (int i = 0; i < n; i++) {
        if (currNum + nums[i] > max) {
            currNum = nums[i];
            currElements++;
        }
        else {
            currNum += nums[i];
        }
    }
    return currElements <= m;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    int mini = 0, maxi = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        mini = max(a, mini);
        maxi += a;
        nums.push_back(a);
    }
    ll ans = 0ll;
    while (true) {
        if (maxi < mini) break;
        ll mid = (maxi + mini) / 2;
        bool yes = check(mid);
        if (yes) {
            ans = mid;
            maxi = mid - 1;
        }
        else mini = mid + 1;
    }
    cout << ans;
    return 0;
}

