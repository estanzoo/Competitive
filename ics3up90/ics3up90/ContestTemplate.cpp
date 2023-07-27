// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

static int n;
long long maxRating = INT_MIN;
static vector <int> ratings;

void dfs(int start, long long rating, bool visited[], list<int> adjList[])
{
    visited[start] = true;
    rating += ratings[start];
    if (rating > maxRating)
        maxRating = rating;
    for (int adj : adjList[start])
    {
        if (!visited[adj])
            dfs(adj, rating, visited, adjList);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    list<int> adjList[n];
    bool visited[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        int curr;
        cin >> curr;
        ratings.push_back(curr);
    }
    for (int i = 0; i < n - 1; i++)
    {
        int curr, curr1;
        cin >> curr >> curr1;
        adjList[curr - 1].push_back(curr1 - 1);
        adjList[curr1 - 1].push_back(curr - 1);
    }
    dfs(0, 0, visited, adjList);
    cout << maxRating;
    return 0;
}