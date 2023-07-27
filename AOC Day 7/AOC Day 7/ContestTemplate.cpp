// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e6 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

vector<string> split(string a) {
    vector<string> ans;
    string curr = "";
    for (int i = 0; i < a.length(); i++) {
        if (a[i] == ' ') {
            ans.push_back(curr);
            curr = "";
        }
        else curr += a[i];
    }
    ans.push_back(curr);
    return ans;
}

bool isNum(string a) {
    for (int i = 0; i < a.length(); i++) {
        if (a[i] > 57 || a[i] < 48) return false;
    }
    return true;
}

unordered_map<string, int> files;
unordered_map<string, string> parent;
unordered_map<string, vector<string>> adj;
unordered_set<string> dirs;
unordered_map<string, int> totals;
int bigTot = 0;

int bfs(string start) {
    unordered_set<string> visited;
    queue<string> q;
    visited.emplace(start);
    q.push(start);
    int tot = 0;
    while (!q.empty()) {
        string curr = q.front(); q.pop();
        if (files.find(curr) != files.end()) tot += files.at(curr);
        for (string c : adj[curr]) {
            if (visited.find(c) == visited.end() && (curr.compare("/") == 0|| parent.at(curr).compare(c) != 0)) {
                visited.emplace(c);
                q.push(c);
            }

        }
    }
    totals.emplace(start, tot);
    return tot;
}

string removeLatest(string a) {
    for (int i = a.length() - 1; i >= 0; i--) {
        if (a[i] == '/') {
            return a.substr(0, i);
        }
    }
    return "/";
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int mode = 0;
    //0 = normal
    //1 = listing
    string currDir = "/", curr;
    getline(cin, curr);
    dirs.emplace(currDir);
    for (int i = 0; i < 990; i++) {
        getline(cin, curr);
        vector<string> tokens = split(curr);
        if (tokens[0][0] == '$') {
            if (tokens[1].compare("cd") == 0) {
                if (tokens[2].compare("..") == 0) currDir = removeLatest(currDir);
                else currDir += "/" + tokens[2];
            }
        }
        else if (tokens[0].compare("dir")==0){
            parent.emplace(currDir + "/" + tokens[1], currDir);
            if (adj.find(currDir) == adj.end()) {
                vector<string> c; 
                c.push_back(currDir + "/" + tokens[1]);
                adj.emplace(currDir, c);
                dirs.emplace(currDir + "/" + tokens[1]);

            }
            else {
                vector <string> c = adj.at(currDir);
                c.push_back(currDir + "/" + tokens[1]);
                adj[currDir] = c;
                dirs.emplace(currDir + "/" + tokens[1]);

            }
        }
        else if (isNum(tokens[0])) {
            if (files.find(currDir) == files.end()) {
                int num = stoi(tokens[0]);
                files.emplace(currDir, num);
            }
            else {
                int num = files.at(currDir);
                num += stoi(tokens[0]);
                files[currDir]= num;
            }

        }
    }
    int ans = 0;
    for (string c : dirs) {
        int tot = bfs(c);
        ans += tot;
    }
    int currTot = totals.at("/");
    int currFree = 70000000 - currTot;
    int mini = INT_MAX;
    for (auto c : totals) {
        if (c.second + currFree >= 30000000) mini = min(mini, c.second);
    }
    cout << mini;
    return 0;
}

