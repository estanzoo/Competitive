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
    string a; int b;
    cin >> a >> b;
    int curr = 0, ans = 0, l = 0, r= 0;
    while (l < a.length() && r < a.length()) {
        while (curr <= b && r < a.length()) {
            if (a[r] == '0') curr++;
            r++;
            if (curr > b) {
                ans = max(ans, r - l-1);
                break;
            }
        }
        while (curr > b) {
            if (a[l] == '0') {
                curr--;
            }
            l++;
        }
        if (r == a.length()) ans = max(ans, r - l);
    }
    cout << ans;
    return 0;
}

