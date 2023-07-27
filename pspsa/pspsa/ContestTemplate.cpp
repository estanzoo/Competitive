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
    int n;
    cin >> n;
    vector<int> a, psa, pspsa;
    a.push_back(0);
    psa.push_back(0);
    pspsa.push_back(0);
    for (int i = 1, ac; i <= n; i++) {
        cin >> ac;
        a.push_back(ac);
        psa.push_back(psa[i - 1] + ac);
        pspsa.push_back(pspsa[i - 1] + psa[i]);
    }
    
    for (int i = 1; i <= n; i++) {
        cout << pspsa[i] << " ";
    }
    cout << "\n";
    return 0;
}

