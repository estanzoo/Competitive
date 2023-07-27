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
    string a; cin >> a;
    unordered_map<char, int> map;
    map.emplace('M', 1000);
    map.emplace('D', 500);
    map.emplace('C', 100);
    map.emplace('L', 50);
    map.emplace('X', 10);
    map.emplace('V', 5);
    map.emplace('I', 1);
    int ans = 0;
    int num = a[0]-48; char curr = a[1];
    int val, preVal;
    preVal = map.at(curr);
    ans += num * preVal;
    for (int i = 2; i < a.length(); i += 2) {
        int num = a[i]-48; char curr = a[i + 1];
        val = map.at(curr);
        if (val > preVal) {
            ans -= 2 * (a[i - 2]-48) * preVal;
        }
        ans += num * val;
        preVal = val;
    }
    cout << ans;
    return 0;
}

