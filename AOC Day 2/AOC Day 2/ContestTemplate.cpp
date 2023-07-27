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
    unordered_map<char, int> first;
    unordered_map<int, int> second;
    first.emplace('A', 1);
    first.emplace('B', 2);
    first.emplace('C', 3);
    second.emplace(0, 3);
    second.emplace(1, 1);
    second.emplace(2, 2);
    second.emplace(3, 3);
    second.emplace(4, 1);
    int ans = 0;
    for (int i = 0; i < 2500; i++) {
        char a, b; cin >> a >> b;
        int ind = first.at(a);
        if (b == 'Z') { ans += 6; ind++; }
        else if (b == 'Y') { ans += 3; }
        else ind--;
        ans += second.at(ind);

    }
    cout << ans;
    return 0;
}

