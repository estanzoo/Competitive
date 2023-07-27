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
    int ac = 100, bc = 100;
    for (int i = 0, a, b; i < n; i++) {
        cin >> a >> b;
        if (a > b) bc -= a;
        else if (a < b) ac -= b;
    }
    cout << ac << "\n" << bc;
    return 0;
}

