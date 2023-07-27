// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long


void bfs(int start, int day, int distance)
{

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, q, k;
    cin >> n >> m >> q >> k;
    vector<int>day;
    for (int i = 0; i < n; i++)
    {
        day.push_back(0);
    }
    vector<bool>heard;
    for (int i = 0; i < n; i++)
    {
        heard.push_back(false);
    }
    int curr;
    for (int i = 0; i < q; i++) {
        cin >> curr;
        heard[curr - 1] = true;
    }
    list<int> adjList[8];
    for (int i = 0; i < m; i++)
    {
        int curr, curr1;
        cin >> curr >> curr1;
        adjList[curr - 1].push_back(curr1 - 1);
        adjList[curr1 - 1].push_back(curr - 1);
    }
    return 0;
}

