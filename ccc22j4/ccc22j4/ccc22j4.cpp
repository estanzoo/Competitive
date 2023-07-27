#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x, y,g, count = 0;
    string currName1, currName2, currName3;
    cin >> x;
    vector<vector<string>> inGroup(x);
    for (int i = 0; i < x; i++)
    {
        cin >> currName1 >> currName2;
        inGroup[i].push_back(currName1);
        inGroup[i].push_back(currName2);
    }
    cin >> y;
    vector<vector<string>> notInGroup(y);
    for (int i = 0; i < y; i++)
    {
        cin >> currName1 >> currName2;
        notInGroup[i].push_back(currName1);
        notInGroup[i].push_back(currName2);
    }
    cin >> g;
    unordered_map<string, int> groups;
    for (int i = 0; i < g; i++)
    {
        cin >> currName1 >> currName2 >> currName3;
        groups.emplace(currName1, i);
        groups.emplace(currName2, i);
        groups.emplace(currName3, i);
    }
    for (int i = 0; i < x; i++)
    {
        if (groups.at(inGroup[i][0]) != groups.at(inGroup[i][1]))
            count++;
    }
    for (int i = 0; i < y; i++)
    {
        if (groups.at(notInGroup[i][0]) == groups.at(notInGroup[i][1]))
            count++;
    }
    cout << count << "\n";
    return 0;
}

