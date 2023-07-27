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

ll psa[MM];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k; cin >> n >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        arr.push_back(a);
    }
    int curr = 0, ans = -1;
    unordered_map<int, int> rem;
    rem.emplace(0, 0);
    for (int i = 1; i <= n; i++) {
        psa[i] = psa[i - 1] + arr[i-1];
        int need = psa[i] % k;
        if (rem.find(need) != rem.end()) {
            ans = max(ans, i - rem[need]);
        }
        if (rem.find(psa[i] % k) == rem.end()){
            rem.emplace(psa[i] % k, i);
        }   
    }
    cout << ans;
    return 0;
}

