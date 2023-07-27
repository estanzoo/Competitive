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
typedef pair <int, char> ps;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a; cin >> a;
    unordered_map<char, int> freq;
    priority_queue <ps> q;
    for (int i = 0; i < a.length(); i++) {
        char curr = a[i];
        if (freq.find(curr) == freq.end()) {
            freq.emplace(curr, 1);
        }
        else {
            freq[i] = freq[i] + 1;
        }
    }
    for (auto d : freq) {
        q.push({ d.second, d.first });
    }
    char last = '6';
    while (!q.empty()) {
        ps top = q.top();
        if (top.second == last) {
            if (q.size() > 1) {
                q.pop();
                ps nextTop = q.top();
                last = nextTop.second;
                q.pop();
                q.push(top);
                ps newTop = { nextTop.second, nextTop.first - 1 };
                q.push(newTop);
            }
        }
    }
    return 0;
}

//a 5
//b 2
//c 5
//d 3

//acacacacdabcd