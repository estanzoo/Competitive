// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    bool isPrime[100001];
    memset(isPrime, true, sizeof(isPrime));
    isPrime[1] = false;
    for (int i = 2; i <= 100000; i++)
    {
        for (int j = 2; j * i <= 100000; j++) isPrime[i * j] = false;
    }
    vector<int> psa;
    psa.push_back(0);
    for (int i = 1; i <= 100000; i++)
    {
        if (isPrime[i]) psa.push_back(i + psa[i - 1]);
        else psa.push_back(psa[i - 1]);
    }
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        cin >> a >> b;
        cout << psa[b] - psa[a - 1] << "\n";
    }
    return 0;
}