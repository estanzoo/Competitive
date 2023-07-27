#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> arr;
    for (int i = 0; i < n; i++)
    {
        int curr;
        cin >> curr;
        arr.push_back(curr);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
        cout << arr[i] << "\n";
    return 0;
}