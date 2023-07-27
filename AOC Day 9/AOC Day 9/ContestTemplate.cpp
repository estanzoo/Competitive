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
typedef pair <bool, bool> bbi;

set<pi> vis;
vector<pi>locs;
int hx = 0, hy = 0, tx = 0, ty = 0;
bool check(int tailx, int taily,  int headx, int heady) {
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (((tailx + i) == headx) && ((taily + j) == heady)) return true;
        }
    }
    return false;
}

void move(int& tailx, int& taily, int& headx, int& heady) {
    if (tailx != headx && heady != taily) {
        tailx++;
        taily++;
        if (check(tailx, taily, headx, heady)) return;
        tailx -= 2;
        taily -= 2;
        if (check(tailx, taily, headx, heady)) return;
        tailx += 2;
        if (check(tailx, taily, headx, heady)) return;
        tailx -= 2;
        taily += 2;
        if (check(tailx, taily, headx, heady)) return;
    }
    else {
        tailx++;
        if (check(tailx, taily, headx, heady)) return;
        tailx -= 2;
        if (check(tailx, taily, headx, heady)) return;
        tailx++;
        taily--;
        if (check(tailx, taily, headx, heady)) return;
        taily += 2;
        if (check(tailx, taily, headx, heady)) return;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string curr;
    vis.insert({ 0,0 });
    for (int i = 0; i < 10; i++) { locs.push_back({ 0,0 }); }
    for (int x = 0; x < 2000; x++) {
        getline(cin, curr);
        if ((curr[0] == 'R')) {
            curr = curr.substr(2);
            int num = stoi(curr);
            for (int j = 0;j < num; j++) {
                locs[0].first++;
                for (int i = 1; i <= 9; i++) {
                    if (!check(locs[i].first, locs[i].second, locs[i-1].first, locs[i-1].second)) {
                        move(locs[i].first, locs[i].second, locs[i - 1].first, locs[i - 1].second);
                        if (i == 9)
                            vis.insert({ locs[i].first, locs[i].second });
                    }
                }
            }
        }
        if ((curr[0] == 'L')) {
            curr = curr.substr(2);
            int num = stoi(curr);
            for (int j = 0; j < num; j++) {
                locs[0].first--;
                for (int i = 1; i <= 9; i++) {
                    if (!check(locs[i].first, locs[i].second, locs[i - 1].first, locs[i - 1].second)) {
                        move(locs[i].first, locs[i].second, locs[i - 1].first, locs[i - 1].second);
                        if (i == 9)
                            vis.insert({ locs[i].first, locs[i].second });
                    }
                }
            }
        }
        if ((curr[0] == 'U')) {
            curr = curr.substr(2);
            int num = stoi(curr);
            for (int j = 0; j < num; j++) {
                locs[0].second++;
                for (int i = 1; i <= 9; i++) {
                    if (!check(locs[i].first, locs[i].second, locs[i - 1].first, locs[i - 1].second)) {
                        move(locs[i].first, locs[i].second, locs[i - 1].first, locs[i - 1].second);
                        if (i == 9)
                            vis.insert({ locs[i].first, locs[i].second });
                    }
                }
            }
        }
        if ((curr[0] == 'D')) {
            curr = curr.substr(2);
            int num = stoi(curr);
            for (int j = 0; j < num; j++) {
                locs[0].second--;
                for (int i = 1; i <= 9; i++) {
                    if (!check(locs[i].first, locs[i].second, locs[i - 1].first, locs[i - 1].second)) {
                        move(locs[i].first, locs[i].second, locs[i - 1].first, locs[i - 1].second);
                        if (i == 9)
                            vis.insert({ locs[i].first, locs[i].second});
                    }
                }
            }
        }
    }
    cout << vis.size();
    return 0;
}

