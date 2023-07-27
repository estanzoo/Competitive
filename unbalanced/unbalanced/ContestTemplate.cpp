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
    int n, k, last; cin >> n >> k;
    multiset<int> set;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        arr.push_back(a);
    }
    for (int i = 0; i < k; i++) set.insert(arr[i]);
    cout << *set.rbegin() - *set.begin();
    for (int i = 0; i < n - k; i++) {
        set.erase(set.find(arr[i]));
        set.insert(arr[i + k]);
        cout << "  " <<  * set.rbegin() - *set.begin();
    }
    return 0;
}

