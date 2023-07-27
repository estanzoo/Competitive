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
    string a;
    cin >> a;
    vector <int> psa;
    vector <int> ssa;
    for (int i = 0; i < n + 2; i++) psa.push_back(0);
    for (int i = 0; i < n + 2; i++) ssa.push_back(0);
    for (int i = 1; i <= n; i++) 
    {
        psa[i] = psa[i - 1];
        if (a[i - 1] == 'b') 
            psa[i]++;
    }
    for (int i = n; i > 0; i--) 
    {
        ssa[i] = ssa[i + 1];
        if (a[i - 1] == 'r') 
            ssa[i]++;    
    }
    int ans = n;
    for (int i = 0; i <= n; i++) 
    {
        if (ans > psa[i] + ssa[i+1])
            ans = psa[i] + ssa[i+1];
    }
    cout << ans;
    return 0;
}