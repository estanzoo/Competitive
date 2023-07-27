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
    int n, q, curr, curr1;
    vector <int> champ;
    vector<int> champSorted;
    vector<int>friends;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        champ.push_back(curr);
        champSorted.push_back(curr);
    }
    sort(champSorted.begin(), champSorted.end());
    for (int i = 0; i < n; i++) friends.push_back(0);
    for (int i = 0; i < q; i++)
    {
        cin >> curr >> curr1;
        curr--;
        curr1--;
        if (champ[curr] < champ[curr1])
        {
            friends[curr1]++;
        }
        else if (champ[curr1] < champ[curr])
        {
            friends[curr]++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int value = lower_bound(champSorted.begin(), champSorted.end(), champ[i]) - champSorted.begin();
        value -= friends[i];
        if (i < n - 1) cout << value << " ";
        else cout << value << endl;
    }
    return 0;
}

