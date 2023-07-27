// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q, a;
    ll count = 0;
    cin >> n >> q;
    vector<int>ints;
    loop(n)
    {
        cin >> a;
        ints.push_back(a);
    }
    sort(ints.begin(), ints.end());
    for (int i = 0; i < n; i++)
    {
        int curr = q - ints[i];
        int index = upper_bound(ints.begin(), ints.end(), curr) - ints.begin();
        count += index;
        if (curr >= ints[i]) count--;
    }
    count /= 2;
    cout << count << "\n";
    return 0;
}

