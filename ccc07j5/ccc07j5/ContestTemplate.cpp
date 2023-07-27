// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 40;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int n, a, b, ans = 0; 
vector<int> motels;

ll dp[MM];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> n;
    motels.push_back(0);
    motels.push_back(990);
    motels.push_back(1010);
    motels.push_back(1970);
    motels.push_back(2030);
    motels.push_back(2940);
    motels.push_back(3060);
    motels.push_back(3930);
    motels.push_back(4060);
    motels.push_back(4970);
    motels.push_back(5030);
    motels.push_back(5990);
    motels.push_back(6010);
    motels.push_back(7000);
    for (int i = 0; i < n; i++) {
        int c; cin >> c;
        motels.push_back(c);
    }
    sort(motels.begin(),motels.end());
    dp[0] = 1;
    for (int i = 1; i < motels.size(); i++) {
        for (int j = i - 1; j >= 0; j--) {
            int d = motels[i] - motels[j];
            if (a <= d && d <= b) dp[i] += dp[j];
        }
    }
    cout << dp[motels.size() - 1] << "\n";
    return 0;
}

