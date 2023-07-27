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
    vector<int> ep, maxLeft, maxRight, occurRight, occurLeft;
    int n, q, a, b;
    cin >> n >> q;
    for (int i = 0; i < n; i++){
        cin >> a;
        ep.push_back(a);
        if (i > 0){
            if (a>maxLeft[i-1]) {
                maxLeft.push_back(a);
                occurLeft.push_back(1);
            }
            else if (a==maxLeft[i-1]) {
                maxLeft.push_back(a);
                occurLeft.push_back(occurLeft[i - 1] + 1);
            }
            else if (a < maxLeft[i - 1])
            {
                maxLeft.push_back(maxLeft[i-1]);
                occurLeft.push_back(occurLeft[i - 1]);
            }
        }
        else{
            maxLeft.push_back(ep[i]);
            occurLeft.push_back(1);
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        maxRight.push_back(0); occurRight.push_back(0);
    }
    for (int i = n-1; i >=0; i--){
        if (i != n-1){
            if (ep[i] > maxRight[i + 1]) {
                maxRight[i] = ep[i];
                occurRight[i] = 1;
            }
            else if (ep[i] == maxRight[i + 1]) {
                maxRight[i] = ep[i];
                occurRight[i] = occurRight[i + 1] + 1;
            }
            else if (ep[i] < maxRight[i + 1]) {
                maxRight[i] = maxRight[i + 1];
                occurRight[i] = occurRight[i + 1];
            }
        }
        else{
            maxRight[i] = ep[i];
            occurRight[i] = 1;
        }
    }
    for (int i = 0; i < q; i++){
        cin >> a >> b; a--; b--;
        if (a > 0 && b < n - 1) {
            cout << max(maxLeft[a - 1], maxRight[b + 1]) << " ";
            if (maxLeft[a - 1] > maxRight[b + 1]) cout << occurLeft[a - 1] << "\n";
            else if (maxLeft[a - 1] < maxRight[b + 1]) cout << occurRight[b + 1] << "\n";
            else cout << occurLeft[a - 1] + occurRight[b + 1] << "\n";
        }
        else if (a > 0) cout << maxLeft[a - 1] << " " << occurLeft[a - 1] << "\n";
        else if (b < n - 1) cout << maxRight[b + 1] << " " << occurRight[b + 1] << "\n";

    }
    return 0;
}

