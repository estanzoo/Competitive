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

int roots[MM];
ll resourceful[MM];
int sizelist[MM];

int getRoot(int a) {
    if (a == roots[a]) return a;
    return roots[a] = getRoot(roots[a]);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q; cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        roots[i] = i;
        sizelist[i] = 1;
        int a; cin >> a;
        resourceful[i] = a;
    }
    for (int i = 0; i < q; i++) {
        int a, b, c;
        cin >> a; 
        if (a == 1) {
            cin >> b >> c;
            int root1 = getRoot(b), root2 = getRoot(c);
            if (root1 != root2) {
                resourceful[root1] += resourceful[root2];
                sizelist[root1] += sizelist[root2];
                roots[root2] = root1;
            }
            
        }
        if (a == 2) {
            cin >> b; 
            c = getRoot(b); cout << sizelist[c] << "\ln";
        }
        if (a == 3) {
            cin >> b; 
            c = getRoot(b); cout << resourceful[c] << "\ln";
        }
    
    }
    return 0;
}

