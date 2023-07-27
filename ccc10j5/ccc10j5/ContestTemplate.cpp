// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

vector<pair<int, int>> visited;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, d, ans =0;
    cin >> a >> b >> c >> d;
    pair <int, int> start = make_pair(a, b);
    pair <int, int> end = make_pair(c, d);
    if (start == end) cout << 0;
    else {
        visited.push_back(start);

        int numThisLayer = 1;
        vector<pair<int, int>>thisLayer;
        vector<pair<int, int>>nextLayer;
        thisLayer.push_back(start);
        bool found = false;
        while (true)
        {
            for (int i = 0; i < numThisLayer; i++)
            {
                pair <int, int> thisNode = thisLayer[i];
                if (thisNode == end) {
                    break;
                    found = true;
                }
                int x = thisNode.first;
                int y = thisNode.second;
                if (x + 1 >= 1 && x + 1 <= 8 && y + 2 >= 1 && y + 2 <= 8) {
                    pair <int, int> curr = make_pair(x + 1, y + 2);
                    if (curr == end) {
                        ans++;
                        found = true;
                        break;
                    }
                    if (find(visited.begin(), visited.end(), curr) == visited.end())nextLayer.push_back(curr);
                }
                if (x - 1 >= 1 && x - 1 <= 8 && y + 2 >= 1 && y + 2 <= 8) {
                    pair <int, int> curr = make_pair(x - 1, y + 2);
                    if (curr == end) {
                        ans++;
                        found = true;
                        break;
                    }
                    if (find(visited.begin(), visited.end(), curr) == visited.end())nextLayer.push_back(curr);
                }
                if (x + 1 >= 1 && x + 1 <= 8 && y - 2 >= 1 && y - 2 <= 8) {
                    pair <int, int> curr = make_pair(x+ 1, y- 2);
                    if (curr == end) {
                        ans++;
                        found = true;
                        break;
                    }
                    if (find(visited.begin(), visited.end(), curr) == visited.end())nextLayer.push_back(curr);
                }
                if (x - 1 >= 1 && x - 1 <= 8 && y - 2 >= 1 && y - 2 <= 8) {
                    pair <int, int> curr = make_pair(x - 1, y - 2);
                    if (curr == end) {
                        ans++;
                        found = true;
                        break;
                    }
                    if (find(visited.begin(), visited.end(), curr) == visited.end())nextLayer.push_back(curr);
                }
                if (x + 2 >= 1 && x + 2 <= 8 && y + 1 >= 1 && y + 1 <= 8) {
                    pair <int, int> curr = make_pair(x + 2, y + 1);
                    if (curr == end) {
                        ans++;
                        found = true;
                        break;
                    }
                    if (find(visited.begin(), visited.end(), curr) == visited.end())nextLayer.push_back(curr);
                }
                if (x - 2 >= 1 && x - 2 <= 8 && y + 1 >= 1 && y + 1 <= 8) {
                    pair <int, int> curr = make_pair(x - 2, y + 1);
                    if (curr == end) {
                        ans++;
                        found = true;
                        break;
                    }
                    if (find(visited.begin(), visited.end(), curr) == visited.end())nextLayer.push_back(curr);
                }
                if (x + 2 >= 1 && x + 2 <= 8 && y - 1 >= 1 && y - 1 <= 8) {
                    pair <int, int> curr = make_pair(x + 2, y - 1);
                    if (curr == end) {
                        ans++;
                        found = true;
                        break;
                    }
                    if (find(visited.begin(), visited.end(), curr) == visited.end())nextLayer.push_back(curr);
                }
                if (x - 2 >= 1 &&  x- 2 <= 8 && y - 1 >= 1 && y - 1 <= 8) {
                    pair <int, int> curr = make_pair(x - 2, y - 1);
                    if (curr == end) {
                        ans++;
                        found = true;
                        break;
                    }
                    if (find(visited.begin(), visited.end(), curr) == visited.end())nextLayer.push_back(curr);
                }
            }
            if (found) break;
            thisLayer.clear();
            for (pair<int, int> lel : nextLayer)
            {
                if (find(thisLayer.begin(), thisLayer.end(), lel) == thisLayer.end())
                    thisLayer.push_back(lel);
            }
            nextLayer.clear();
            numThisLayer = thisLayer.size();
            ans++;
        }
        cout << ans;
    }

    return 0;
}

