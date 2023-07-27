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

int n, q, ans = 0;
int jerseys[MM];
string sizes = "SML";
bool avail[MM];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    memset(avail, true, sizeof(avail));
    cin >> n >> q;
    char curr;
    for (int i = 1; i<= n; i++) {
        cin >> curr;
        jerseys[i] = find(sizes.begin(), sizes.end(), curr) - sizes.begin();
    }
    for (int i = 1, num; i <=q; i++) {
        cin >> curr >> num;
        if (avail[num]) {
            int currSize = find(sizes.begin(), sizes.end(), curr) - sizes.begin();
            if (currSize <= jerseys[num]) {
                ans++;
                avail[num] = false;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}

