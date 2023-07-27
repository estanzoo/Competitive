// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector <string> adj;
    vector <string> noun;
    for (int i = 0; i < n; i++)
    {
        string curr;
        cin >> curr;
        adj.push_back(curr);
    }
    for (int i = 0; i < m; i++)
    {
        string curr;
        cin >> curr;
        noun.push_back(curr);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << adj[i] << " as " << noun[j] << "\n";
        }
    }
    return 0;
}

