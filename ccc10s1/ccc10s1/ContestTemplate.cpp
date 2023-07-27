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

struct comp {
    string name; int val;
    comp(string name, int a, int b, int c) {
        this->name = name;
        val = 2 * a + 3 * b + c;
    }
};

bool compare(comp a, comp b) {
    if (a.val != b.val)
        return a.val > b.val;
    else
        return (a.name.compare(b.name) < 0);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<comp> comps;
    for (int i = 0; i < n; i++) {
        string a; int b, c, d;
        cin >> a >> b >> c >> d;
        comps.push_back({ a, b, c, d });
    }
    sort(comps.begin(), comps.end(), compare);
    for (int i = 0; i < comps.size() && i < 2; i++) {
        cout << comps[i].name << "\n";
    }
    return 0;
}

