// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long

static ll num = 0;

void dfs(int start, bool visited[], list<int> adjList[])
{
    visited[start] = true;
    num++;
    for (int adj : adjList[start])
    {
        if (!visited[adj])
            dfs(adj, visited, adjList);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    list <int> adjList[5];
    for (int i = 0; i < m; i++)
    {
        int curr, curr1;
        cin >> curr >> curr1;
        adjList[curr-1].push_back(curr1-1);
        adjList[curr1-1].push_back(curr-1);
    }
    for (int i = 0; i < n; i++)
    {
        bool visited[5] = { 0 };
        dfs(i, visited, adjList);
    }
    cout << num;

}

