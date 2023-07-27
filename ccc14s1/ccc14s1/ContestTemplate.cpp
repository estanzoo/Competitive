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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n;
    vector <int> a;
    for (int i = 1; i <= n; i++) a.push_back(i);
    cin >> m;
    for (int i = 0, cur; i < m; i++) {
        cin >> cur;
        int counter = 0;
        vector <int> sheesh;
        for (int j = 0; j < a.size(); j++) {
            counter++;
            if (counter % cur == 0) sheesh.push_back(-1);
            else sheesh.push_back(1);
        }
        vector<int> newA;
        for (int j = 0; j < a.size(); j++) {
            
            if (sheesh[j] == 1) {
                newA.push_back(a[j]);
            }
        }
        a = newA;
    }
    for (int c : a) {
        cout << c << "\n";
    }
    return 0;
}

