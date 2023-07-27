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
    string a, b; cin >> a >> b;
    int val = b[0] - a[0];
    if (val < 0) val += 26;
    for (int i = 1; i < a.length(); i++) {
        int curr = b[i] - a[i];
        if (curr < 0) curr += 26;
        if (curr != val) {
            cout << "No"; return 0;
        }
    }
    cout << "Yes";
    return 0;
}

