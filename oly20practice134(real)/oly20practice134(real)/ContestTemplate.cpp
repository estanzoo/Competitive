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
    vector<int> a; 
    for (int i = 0; i < n; i++) {
        int b; cin >> b; a.push_back(b);
    }
    int curr = 1, maxN = 1;
    for (int i = 1; i < n; i++) {
        if (a[i - 1] < a[i]) {
            maxN = max(maxN, curr);
            curr = 1;
        }
        else {
            curr++;
        }
    }
    maxN = max(maxN, curr);
    cout << maxN;
    return 0;
}

