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

int roots[100000];

int getRoot(int a) {
    if (a == roots[a]) return a;
    return roots[a] = getRoot(roots[a]);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for (int x = 0; x < 5; x++) {
        int n, itemCounter; cin >> n;
        for (int i = 0; i < 100000; i++) {
            roots[i] = i;
        }
        unordered_map<string, int> places;
        unordered_set<string> known;
        for (int i = 0; i < n; i++) {
            char c; string a, b;
            cin >> c >> a >> b;
            if (known.find(a) == known.end()) {
                known.emplace(a);
                places.emplace(a, known.size() - 1);
            }
            if (known.find(b) == known.end()) {
                known.emplace(b);
                places.emplace(b, known.size() - 1);
            }
            if ('p' == c) {
                int rootA = getRoot(places.at(a)), rootB = getRoot(places.at(b));
                if (rootA != rootB) {
                    roots[rootA] = rootB;
                }
            }
            else {
                int rootA = getRoot(places.at(a)), rootB = getRoot(places.at(b));
                if (rootA != rootB) {
                    cout << "not connected\n";
                }
                else {
                    cout << "connected\n";
                }
            }
        }
    }
    return 0;
}

