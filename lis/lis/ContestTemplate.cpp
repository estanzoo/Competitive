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

int n; vector<int> arr;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int curr; cin >> curr;
        if (i == 1 || arr[arr.size() - 1] < curr) {
            arr.push_back(curr);
        }
        else {
            *lower_bound(arr.begin(), arr.end(), curr) = curr;
        }
    }
    cout << arr.size();
    return 0;
}

