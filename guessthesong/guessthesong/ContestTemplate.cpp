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
    int n, preSize, ans = 0;
    string pre, curr;
    cin >> n >> pre;
    preSize = pre.length();
    for (int i = 0; i < n; i++){
        cin >> curr;
        if (curr.substr(0, preSize).compare(pre) == 0) ans++;
    }
    cout << ans;
    return 0;
}

