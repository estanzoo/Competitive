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
    int n;
    cin >> n;
    deque <char> pp;
    char l, r;
    for (int i = 0; i < n; i++)
    {
        cin >> l >> r;
        if (l == 'R') {
            pp.push_back(r);
        } else pp.push_front(r);
    }
    char prev;
    int ans = 0;
    prev = pp.front();
    pp.pop_front();
    for (int i = 1; i < n; i++)
    {
        char curr = pp.front();
        pp.pop_front();
        if (curr != prev) ans++;
        prev = curr;
    }
    cout << ans << "\n";
    return 0;
}

