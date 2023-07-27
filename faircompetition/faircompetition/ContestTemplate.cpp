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
    int nums[76] = {0};
    int n, m, curr, max = -1;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        curr;
        nums[curr]++;
        if (curr > max)
            max = curr;
    }
    curr = 0;
    for (int i = max; i >= 0; i--)
    {
        curr += nums[i];
        if (curr > m)
        {
            curr -= nums[i];
            break;
        }
    }
    cout << curr;
    return 0;
}

