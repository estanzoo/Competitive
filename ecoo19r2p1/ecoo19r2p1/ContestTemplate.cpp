// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

string processAddress(string a)
{
    string curr = "";
    int atIndex = -1;
    bool reachedAt = false;
    bool inPlus = false;
    for (int i = 0; i < a.length(); ++i)
    {
        if (a[i] == '@') {
            curr += '@';
            atIndex = i;
            break;
        }
        if (a[i] == '+') inPlus = true;
        if (!inPlus)
        {
            if (a[i] >= 65 && a[i] <= 90) curr += (char)(a[i] + 32);
            else if (a[i] >= 97 && a[i] <= 122) curr += a[i];
            else if (a[i] != '.')curr += a[i];
        }
    }
    atIndex++;
    for (int i = atIndex; i < a.length(); i++)
    {
        if (a[i] >= 65 && a[i] <= 90) curr += (char)(a[i] + 32);
        else if (a[i] >= 97 && a[i] <= 122) curr += a[i];
        else curr += a[i];
    }
    return curr;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    for (int x = 0; x < 10; ++x)
    {
        int n;
        string a;
        unordered_set<string>data;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            data.emplace(processAddress(a));
        }
        cout << data.size() << "\n";
    }

    return 0;
}

