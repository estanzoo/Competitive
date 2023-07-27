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

struct E {
    int a, b, c;
};

struct comp {
    bool operator()(E const& p1, E const& p2)
    {
        return p1.c > p2.c;
    }
};

int roots[MM];
vector <E> edge;

int getRoot(int a) {
    if (roots[a] == a) return a;
    return roots[a] = getRoot(roots[a]);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, q, min = INT_MAX; cin >> n >> m >> q;
    vector<int>dest;
    for (int i = 0; i < m; i++) {
        int a, b, c; cin >> a >> b >> c;
        roots[a] = a;
        roots[b] = b;
        edge.push_back({a,b,c});
    }
    for (int i = 0; i < q; i++) {
        int a; cin >> a; dest.push_back(a);
    }
    //Sorting the edges for Kruksal's Algorithm.
    sort(edge.begin(), edge.end(), comp());
    int ans = 0;
    //i = iterator for destinations, j = iterator for the edges (this is Kruksa's Algorithm, so we start addind edge weights to our MST until we see that we succesfully reached the j_th destination city) 
    for (int i = 0, j = 0; j < dest.size(); j++) {
        int x = dest[j];
        //Checking if we have succesfully reached the current destination city by checking if they have the same roots.
        for (; getRoot(1) != getRoot(x); i++) {
            //Adding the current edge to the MST.
            int u = getRoot(edge[i].a), v = getRoot(edge[i].b);
            if (u != v) { roots[u] = v; ans = edge[i].c; }
        }
    }
    cout << ans << "\n";
    return 0;
}

