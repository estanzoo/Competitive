#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    string line;
    cin >> n >> line;
    for (int i = 0; i < n; i++)
    {
        unordered_set<string> exists;
        bool good = true;
        for (int j = 0; j < n - i; j++)
        {
            string curr = line.substr(j, i + 1);
            if (exists.find(curr) != exists.end())
            {
                good = false;
                break;
            }
            exists.emplace(curr);
        }
        if (good)
        {
            cout << i + 1;
            break;
        }
    }
    return 0;
}