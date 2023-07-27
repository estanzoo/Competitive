// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 12;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

vector<int> adj[MM], ans;
int incoming[MM];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    memset(incoming, 0, sizeof(incoming));
    adj[1].push_back(7);
    incoming[7]++;
    adj[1].push_back(4);
    incoming[4]++;
    adj[2].push_back(1);
    incoming[1]++;
    adj[3].push_back(4);
    incoming[4]++;
    adj[3].push_back(5);
    incoming[5]++;
    while (true) {
        int a, b;
        cin >> a >> b;
        if (a == b && a == 0) break;
        adj[a].push_back(b);
        incoming[b]++;
    }
    set <int> q;
    int counter = 0;
    vector<int> curr;
    for (int i = 1; i <= 7; i++) {
        if (incoming[i] == 0) q.insert(i);
    }
    while (!q.empty()) {
        int curr = *q.begin(); 
        q.erase(q.begin()); 
        counter++; 
        ans.push_back(curr);
        for (int c : adj[curr]) {
            if (incoming[c] - 1 == 0) q.insert(c);
            incoming[c]--;
        }
    }
    if (counter == 7) {
        cout << ans[0];
        for (int i = 1; i < counter; i++) cout << " " << ans[i];
        cout << "\n";
    }
    else cout << "Cannot complete these tasks. Going to bed." << "\n";
    return 0;
}

