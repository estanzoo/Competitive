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
    int t;
    cin >> t;
    for (int z = 0; z < t; z++)
    {
        unordered_map<string, vector<pair<int, int>>> a;
        int n, q, price, quantity;
        string name;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> q;
            for (int j = 0; j < q; j++)
            {
                cin >> name >> price >> quantity;
                vector<pair<int, int>> b;
                if (a.find(name) == a.end())
                {
                    b.push_back(make_pair(price, quantity));
                }
                else
                {
                    b = a.at(name);
                    b.push_back(make_pair(price, quantity));
                }
                a.erase(name);
                a.emplace(name, b);
            }
        }
        unordered_map<string, vector<pair<int, int>>> newA;
        for (auto& c : a)
        {
            vector<pair<int, int>> d = c.second;
            sort(d.begin(), d.end(), [](pair<int, int> lhs, pair<int, int> rhs) {
                return lhs.first < rhs.first;
                });
            newA.emplace(c.first, d);
        }
        a = newA;
        int needed = 0;
        cin >> q;
        for (int i = 0; i < q; i++)
        {
            cin >> name >> quantity;
            vector<pair<int, int>> b = a.at(name);
            for (int j = 0; j < b.size(); j++)
            {
                if (b[j].second >= quantity)
                {
                    needed += b[j].first * quantity;
                    break;
                }
                else
                {
                    needed += b[j].first * b[j].second;
                    quantity -= b[j].second;
                }
            }
        }
        cout << needed << "\n";
    }


    return 0;
}

