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
    int n, q, a, b, count = 0;
    cin >> n >> q;
    vector <int> lights(n+1, 0);
    vector<int> on(n, 0);
    for (int i = 0; i < q; i++)
    {
        cin >> a >> b; a--; b--;
        lights[a]++;
        lights[b + 1]--;
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0) on[i] = lights[i];
        else on[i] = lights[i] + on[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        if (on[i] % 2 == 1) count++;
    }
    cout << count;
    return 0;
}

