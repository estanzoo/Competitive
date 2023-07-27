// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <unordered_set>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

class obj
{
    unordered_set<string> a;
};
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q, type, index;
    string name;
    cin >> n >> q;
    vector<unordered_set<string>> lists;
    for (int i = 0; i < n; i++)
    {
        unordered_set<string>a;
        lists.push_back(a);
    }

    loop(q)
    {
        cin >> type >> index >> name;
        index--;
        if (type == 1)
        {
            if (lists[index].find(name) == lists[index].end())
                cout << "0\n";
            else
                cout << "1\n";
        }
        else
        {
            lists[index].emplace(name);
        }

    }

    return 0;
}

