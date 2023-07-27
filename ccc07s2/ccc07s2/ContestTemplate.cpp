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
    int n, q, a, b, c;
    vector<pair<int, vector<int>>> boxes;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        vector<int> dimensions;
        dimensions.push_back(a); dimensions.push_back(b); dimensions.push_back(c);
        sort(dimensions.begin(), dimensions.end());
        int volume = a * b * c;
        boxes.push_back(make_pair(volume, dimensions));
    }
    sort(boxes.begin(), boxes.end(), [](auto& lhs, auto& rhs) {
        return (lhs.first < rhs.first);
        });
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> a >> b >> c;
        vector<int> dimensions;
        dimensions.push_back(a); dimensions.push_back(b); dimensions.push_back(c);
        sort(dimensions.begin(), dimensions.end());
        bool good = false;
        for (int j = 0; j < n; j++)
        {
            if (dimensions[0] <= boxes[j].second[0] && dimensions[01] <= boxes[j].second[1] && dimensions[2] <= boxes[j].second[2])
            {
                good = true;
                cout << boxes[j].first << "\n";
                break;
            }
        }
        if (!good) cout << "Item does not fit.\n";
    }
    return 0;
}

