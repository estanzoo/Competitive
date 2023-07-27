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

bool check(string a) {
    unordered_set<char> b;
    for (int i = 0; i < a.length(); i++) {
        if (b.find(a[i]) != b.end()) return false;
        b.emplace(a[i]);
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a;
    cin >> a;
    string curr = a.substr(0, 14);
    if (check(curr)) cout << 14;
    for (int i = 14; i < a.length(); i++) {
        curr = curr.substr(1);
        curr += a[i];
        if (check(curr)) {
            cout << i + 1;
            break;
        }
    }
    return 0;
}

