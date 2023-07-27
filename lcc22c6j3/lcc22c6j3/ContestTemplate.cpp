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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> nums;
    int n, m, tot = 0; cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        nums.push_back(a);
        tot += a;
    }
    cout << tot;
    
    sort(nums.begin(), nums.end(), greater<int>());
    int sum = 0;
    for (int i = 0; i < m; i++) sum += nums[i];
    if (sum >= 60) cout << "yes";
    else cout << "no";
    
    return 0;
}

