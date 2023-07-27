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
    int n, m;
    bool found = false;
    cin >> n >> m;
    list<int> adjList[n+1];
    for (int i = 0; i < m; i++)
    {
        int h1, h2;
        cin >> h1 >> h2;
        adjList[h1].push_back(h2);
        adjList[h2].push_back(h1);
    }
    int h1, h2;
    cin >> h1 >> h2;
    for (int i : adjList[h1])
    {
        if (i == h2)
        {
            found = true;
            break;
        }
        for (int j : adjList[i])
        {
            if (j == h2)
            {
                found = true;
                break;
            }
        }
    }
    if (found)
        cout << "yay! no complaint.";
    else
        cout << "aww man! whiny Alan.";
    return 0;
}

