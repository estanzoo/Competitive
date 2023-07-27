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
    int n;
    cin >> n;
    n++;
    while (true) {
        string curr = to_string(n);
        unordered_set<char> m;
        bool good = true;
        for (int i = 0; i < curr.length(); i++) {
            char a = curr[i];
            if (m.find(a) != m.end()) {
                good = false;
                break;
            }
            m.emplace(a);
        }
        if (good) {
            cout << n << "\n";
            return 0;
        }
        n++;
    }
    return 0;
}

