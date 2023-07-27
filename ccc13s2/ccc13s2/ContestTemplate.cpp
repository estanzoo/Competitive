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
    int w, n;
    cin >> w >> n;
    int  currTot = 0;
    vector<int> cars;
    for (int i = 0, a; i < n; i++) {
        cin >> a; cars.push_back(a);
    }
    for (int i = 0; i < n; i++) {
        currTot += cars[i];
        if (i >= 4) currTot -= cars[i - 4];
        if (currTot > w) {
            cout << i << "\n";
            return 0;
        }
    }
    cout << n << "\n";
    return 0;
}

