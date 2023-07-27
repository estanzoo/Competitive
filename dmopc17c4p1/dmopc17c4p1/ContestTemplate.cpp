// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e5 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int arr[MM];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q, ans = 0;
    cin >> n >> q;
    for (int i = 0; i < q; i++) {
        int a, b; cin >> a >> b; a++;
        arr[a]++;
        arr[b+1] --;
    }
    int curr = arr[0]; 
    for (int i = 1; i <= n; i++) {
        curr += arr[i];
        if (curr == 0) ans++;
    }
    cout << ans << " " << n - ans;
    return 0;
}
