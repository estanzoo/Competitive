// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1806;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, string> pi;

int in[MM];
vector<int> adj[MM];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int m; cin >> m;
    memset(in, 0, sizeof(in));
    unordered_map<string, int> map;
    vector<string>names;
    for (int i = 0; i < m; i++) {
        string a, b; cin >> a >> b;
        if (map.find(a) == map.end()) {
            map.emplace(a, names.size()); names.push_back(a);
        }
        if (map.find(b) == map.end()) {
            map.emplace(b, names.size()); names.push_back(b);
        }
        adj[map.at(b)].push_back(map.at(a));
        in[map.at(a)]++;
    }
    priority_queue<int, vector<int>, greater<int>>q;
    vector<int> order;
    int n = names.size();
    for (int i = 0; i < n; i++) {
        if (in[i] == 0) q.push(i);
    }
    while (!q.empty()) {
        int currNode = q.top();
        q.pop();
        order.push_back(currNode);
        for (int c : adj[currNode]) {
            in[c]--;
            if (in[c] == 0) q.push(c);
        }
    }
    for (int x : order) {
        cout << names[x] << "\n";
    }
    return 0;
}

