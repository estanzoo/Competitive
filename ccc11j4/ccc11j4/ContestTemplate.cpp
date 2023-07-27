// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
const int MM = 201;
#define ll long long
#define loop(r, x) for (int r = 0; r < x; r++)
typedef pair <int, int> pi;

bool dug[MM][MM * 2];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char a = 'a'; int b = 0, r = 5, c = 199;
    dug[1][200] = true;
    dug[2][200] = true;
    dug[3][200] = true;
    dug[3][200] = true;
    dug[3][201] = true;
    dug[3][202] = true;
    dug[3][203] = true;
    dug[4][203] = true;
    dug[5][203] = true;
    dug[5][204] = true;
    dug[5][205] = true;
    dug[4][205] = true;
    dug[3][205] = true;
    dug[3][206] = true;
    dug[3][207] = true;
    dug[4][207] = true;
    dug[5][207] = true;
    dug[6][207] = true;
    dug[7][207] = true;
    dug[7][206] = true;
    dug[7][205] = true;
    dug[7][204] = true;
    dug[7][203] = true;
    dug[7][202] = true;
    dug[7][201] = true;
    dug[7][200] = true;
    dug[7][199] = true;
    dug[6][199] = true;
    dug[5][199] = true;
    while (true) {
        cin >> a >> b;
        if (a == 'q' && b == 0) break;
        if (a == 'l' || a == 'r') {
            int d;
            bool bad = false;
            if (a == 'l') d = -1;
            else d = 1;
            for (int i = 0; i < b; i++) {
                c += d;
                if (dug[r][c]) bad = true;
                dug[r][c] = true;
            }
            if (bad) {
                cout << c - 200 << " " << r * -1 << " DANGER\n"; 
                return 0;
            }
            else cout << c - 200 << " " << r * -1 << " safe\n";
        }
        else {
            bool bad = false;
            int d;
            if (a == 'd')d = 1;
            else d = -1;
            for (int i = 0; i < b; i++) {
                r += d;
                if (dug[r][c]) bad = true;
                dug[r][c] = true;
            }
            if (bad) {
                cout << c - 200 << " " << r * -1 << " DANGER\n";
                return 0;
            }
            else cout << c - 200 << " " << r * -1 << " safe\n";
        }
    }
    return 0;
}

