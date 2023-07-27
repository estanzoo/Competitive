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

int n;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        int ans = 0;

        while (1) {
            int curr = a & 1;
            ans += curr;
            a >>= 1;
            if (!a) break;
            ans <<= 1;
            
        }
        cout << ans << "\n";
    }

    return 0;
}

