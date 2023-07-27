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
    int n, q, curr;
    cin >> n >> q;
    vector<int> arr;
    vector<int> psa;
    arr.push_back(0);
    psa.push_back(0);
    for (int i = 1, a; i <= n; i++) {
        cin >> a;
        arr.push_back(a);
        psa.push_back(psa[i - 1] + a);
    }
    for (int i = 0, a, b; i < q; i++) {
        cin >> a >> b;
        cout << (psa[b] - psa[a-1])/(b-a+1) << "\n";
    }
    return 0;
}

