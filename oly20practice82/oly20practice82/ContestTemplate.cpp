// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q, a, b;
    cin >> n >> q;
    vector <int> stops;
    for (int i = 0; i < n; i++) { 
        cin >> a; 
        stops.push_back(a); 
    }
    sort(stops.begin(), stops.end());
    for (int i = 0; i < q; i++) {
        int count = 0;
        cin >> a >> b;
        int x = lower_bound(stops.begin(), stops.end(), a) - stops.begin();
        int y = lower_bound(stops.begin(), stops.end(), b) - stops.begin();
        if (y < stops.size() && stops[y] == b) count++;
        count += y - x;
        cout << count << "\n";
    }
    return 0;
}

