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
    int n; cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        string curr; cin >> curr;
        if (curr.find("D:") != string::npos) {
            ans -= 1;
            ans -= (curr.length() - 2) * 3;
        }
        else { 
            ans += 1; 
            ans += (curr.length() - 2) * 3;
        }
    }
    cout << ans;
    return 0;
}

