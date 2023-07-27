// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int NM = 1003;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

bool on[NM];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    int numOn = 0;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        for (int j = a; j <= b; j++) {
            if (!on[j]) {
                numOn++;
                on[j] = true;
                if (numOn == n) {
                    cout << i+1;
                    return 0;
                }
            }
        }
    }
    return 0;
}

