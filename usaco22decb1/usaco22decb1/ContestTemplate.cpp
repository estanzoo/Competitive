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
int n, maxCost = 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++) {

        int a; cin >> a;
        if (a > maxCost) maxCost = a;
        if (map.find(a) == map.end()) {
            map.emplace(a, 1);
        }
        else {
            map[a]++;
        }
    }
    ll currCost = 0, currStudents = n, currAns = 0, ans = 0;;
    for (int i = 1; i <= maxCost; i++) {
        if (map.find(i-1) != map.end())
            currStudents -= map.at(i-1);
        if (i * currStudents > currAns) {
            currAns = i * currStudents;
            ans = i;
        }
    }
    cout << currAns << " "  << ans;
    return 0;
}

