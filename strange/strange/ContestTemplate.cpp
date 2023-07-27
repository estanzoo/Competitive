// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 1e5 + 3;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

struct edge {
    int a, b, c;
    edge(int v, int v1, int w) {
        a = v;
        b = v1;
        c = w;
    }
};

struct comp {
    bool operator()(edge const& p1, edge const& p2) { return p1.c > p2.c; }
};

struct comp2 {
    bool operator()(edge const& p1, edge const& p2) { return p1.c < p2.c; }
    
};

int roots[MM];
int roots2[MM];

int getRoot(int a) {
    if (roots[a] == a) return a;
    return roots[a] = getRoot(roots[a]);
}

int getRoot2(int a) {
    if (roots2[a] == a) return a;
    return roots2[a] = getRoot2(roots2[a]);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    priority_queue <edge, vector<edge>, comp> pq;
    priority_queue <edge, vector<edge>, comp2> pq2;
    for (int i = 0; i < m; i++) {
        int a, b, c; cin >> a >> b >> c;
        roots[a] = a; roots[b] = b;
        roots2[a] = a; roots2[b] = b;
        pq.push({ a,b,c }); pq2.push({ a,b,c });
    }
    int ac = 0;
    ll dis = 0;
    while (ac < n - 1) {
        int n1 = pq.top().a, n2 = pq.top().b, n3 = pq.top().c; pq.pop();
        int r1 = getRoot(n1),r2 = getRoot(n2);
        if (r1 != r2) {
            ac++;
            roots[r1] = r2;
            dis += n3;
        }
    }
    ac = 0;
    ll dis1 = 0;
    while (ac < n - 1) {
        int n1 = pq2.top().a, n2 = pq2.top().b, n3 = pq2.top().c; pq2.pop();
        int r1 = getRoot2(n1), r2 = getRoot2(n2);
        if (r1 != r2) {
            ac++;
            roots2[r1] = r2;
            dis1 += n3;
        }
    }
    cout << dis1 - dis;
    return 0;
}

