// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unordered_map<int,int>pairs;
    int n, k, factors;
    cin >> n >> k;
    if (k % 2 == 0)
        factors = k/2;
    else
        factors = k/2 + 1;
    for (int i = 1; i < factors; i++)
    {
        pairs.emplace(i, k - i);
    } 
    bool valid = true;
    int pos = 1000000000 / k;
    int newFac;
    if (k % 2 == 0)
        newFac = k-1;
    else
        newFac = k;
    if (pos + newFac + 1 < n)
        valid = false;
    unordered_set<int> ans;
    if (valid)
    {
        int currCount = 0;
        if (n % 2 == 0)
        {
            for (auto& it : pairs) {
                 if (currCount + 2 == n)
                 {
                     ans.emplace(it.first);
                     ans.emplace(it.second);
                     currCount += 2;
                    break;
                 }
                 else if (currCount + 2< n)
                 {
                     ans.emplace(it.first);
                     ans.emplace(it.second);
                     currCount += 2;
                 }
            }
            if (currCount < n)
            {
                for (int i = 1; i + currCount <= n; i++)
                {
                    if (i + currCount == n)
                    {
                        ans.emplace(k * i);
                        break;
                    }
                    else
                    {
                        ans.emplace(k * i);
                    }
                }
            }
        }
        else
        {
            for (auto& it : pairs) {
                if (currCount + 2 == n - 1)
                {
                    ans.emplace(it.first);
                    ans.emplace(it.second);
                    currCount += 2;
                    break;
                }
                else if (currCount + 2< n)
                {
                    ans.emplace(it.first);
                    ans.emplace(it.second);
                    currCount += 2;
                }

            }
            if (currCount < n)
            {
                for (int i = 1; i + currCount <= n; i++)
                {
                    if (i + currCount == n)
                    {
                        ans.emplace(k * i);
                        break;
                    }
                    else
                        ans.emplace(k * i);
                }
            }
        }
        int finalCount = 0;
        for (int a : ans)
        {
            finalCount++;
            if (finalCount == n)
                cout << a << "\n";
            else
                cout << a << " ";
        }
    }
    else
        cout << -1 << "\n";
    return 0;
}

