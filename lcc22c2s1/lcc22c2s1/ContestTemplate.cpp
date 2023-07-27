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





#define bob int

#define bobby bool


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    bob n, start, index;
    cin >> n >> start;
    start--;
    bob amt = 0;
    vector<bob> nuts;
    vector<bobby>vis;
    for (bob i = 0; i < n; i++) {
        bob a; cin >> a; nuts.push_back(a);
        vis.push_back(false);
    }
    while (true) {
        if (!vis[start]) {
            vis[start] = true;
            amt++;
            start = nuts[start]-1;
        }
        else break;
    }
    cout << amt << "\n";
    return 0;
}

