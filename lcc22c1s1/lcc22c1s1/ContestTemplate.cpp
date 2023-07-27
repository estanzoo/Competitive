// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(x) for (int i = 0; i < x; i++)

int arr[200001];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    memset(arr, 0, sizeof(arr));
    int L, W;
    cin >> L >> W;
    int a;
    for (int i = 1; i <= L; i++) {
        cin >> a;
        if (i >=a) arr[i - a]++;
    }
    int ans = INT_MAX, col = -1;
    for (int i = 1; i <= W; i++) {
        if (arr[i] <= ans) {
            ans = arr[i];
            col = i;
        }
    }
    cout << ans << " " << col << "\n";
}

