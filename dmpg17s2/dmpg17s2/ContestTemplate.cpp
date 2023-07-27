// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 2e5 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

int root[MM];

int getRoot(int a) {
    if (a == root[a]) return a;
    return root[a] = getRoot(root[a]);
}

vector<string> getTokens(string s) {
    vector<string> ans; string curr = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            ans.push_back(curr); curr = "";
        }
        else curr += s[i];
    }
    ans.push_back(curr);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        root[i] = i;
    }
    cin.ignore(256, '\n');
    for (int i = 0; i < m; i++) {
        string curr; getline(cin,curr);
        vector<string> tokens = getTokens(curr);
        int n1 = stoi(tokens[1]);
        int n2 = stoi(tokens[2]);
        int r1 = getRoot(n1);
        int r2 = getRoot(n2);
        if (tokens[0][0] == 'A') root[r1] = r2;
        else {
            if (r1 == r2) cout << "Y\n";
            else cout << "N\n";
        }
    }
    return 0;
}

