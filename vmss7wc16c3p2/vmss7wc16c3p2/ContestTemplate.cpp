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
    int n, q, a, b;
    int l, r;
    cin >> n >> q >> a >> b;
    list<int> adjList[n+1]; //n+1
    bool visited[n+1]; // n+1
    for (int i = 1; i <= n; i++) visited[i] = false;
    for (int i = 1; i <= q; i++)
    {
        
        cin >> l >> r;
        adjList[l].push_back(r);
        adjList[r].push_back(l);
    }
    queue<int> qu;
    visited[a] = true;
    qu.push(a);
    bool yes = false;
    while (!qu.empty())
    {
        int currentHouse = qu.front();
        visited[currentHouse] = true;
        qu.pop();
        if (currentHouse == b) {
            yes = true; break;
        }
        for (int pp : adjList[currentHouse])
        {
            if (!visited[pp]) qu.push(pp);
            visited[pp] = true;
        }
    }
    if (yes) cout << "GO SHAHIR!";
    else cout << "NO SHAHIR!";
    return 0;
}

