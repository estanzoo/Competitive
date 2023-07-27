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

vector<string> a = { "NE", "ES", "SW", "WN" };

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int x = 0; x < n; x++) {
        int cw = 0, ccw = 0;
        string curr; cin >> curr;
        for (int i = 1; i < curr.length(); i++) {
            if (curr[i] == curr[i - 1])continue;
            string currTurn = curr.substr(i - 1, 2);
            if (find(a.begin(), a.end(), currTurn) != a.end()) cw++;
            else ccw++;
        }
        if (cw > ccw) cout << "CW\n";
        else cout << "CCW\n";
    }
    return 0;
}

