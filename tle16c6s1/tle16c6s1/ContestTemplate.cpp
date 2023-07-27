// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unordered_map<string, int> pref;
    int n, q;
    cin >> n;
    string curr;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        pref.emplace(curr, i);
    }
    cin >> q;
    //unordered_map<string, int> probs;
    //vector <string> probs;
    vector<pair<int, int>> probs;
    for (int i = 0; i < q; i++)
    {
        cin >> curr;
        int index = pref.at(curr);
        pair <int, int> current;
        current = make_pair(index, i);
        probs.push_back(current);
    }
    sort(probs.begin(), probs.end(), [](const auto& lhs, const auto& rhs) {
        if (lhs.first != rhs.first)
            return lhs.first < rhs.first;
        else
            return lhs.second < rhs.second;
        });
    for (auto& a : probs)
    {
        cout << a.second + 1 << "\n";
    }
    return 0;
}

