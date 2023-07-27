// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)


//b.search
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, curr;
    vector<int> a;
    vector<int> ranks;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> curr; a.push_back(curr);
    }
    sort(a.begin(), a.end(), greater<int>());
    ranks.push_back(1);
    curr = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i-1]) ranks.push_back(curr);
        else {
            ranks.push_back(i + 1);
            curr = i + 1;
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> curr;
        int index = lower_bound(a.begin(), a.end(), curr, greater<int>()) - a.begin();
        cout << ranks[index] << "\n";
    }
    return 0;
}

/*
//map
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, curr;
    vector<int> a;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> curr; a.push_back(curr);
    }
    sort(a.begin(), a.end(), greater<int>());
    curr = 1;
    unordered_map<int, int> c;
    c.emplace(a[0], curr);

    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            c.emplace(a[i], i + 1);
            curr = i + 1;
        }
    }
    for (int i = 0; i < m; i++) {
        cin >> curr;
        cout << c.at(curr) << "\n";
    }
    return 0;
}
*/
/*
//bad
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, curr;
    vector<int> a;
    vector<int> ranks;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> curr; a.push_back(curr);
    }
    sort(a.begin(), a.end(), greater<int>());
    ranks.push_back(1);
    curr = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) ranks.push_back(curr);
        else {
            ranks.push_back(i + 1);
            curr = i + 1;
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> curr;
        int index = find(a.begin(), a.end(), curr) - a.begin();
        cout << ranks[index] << "\n";
    }
    return 0;
}
*/