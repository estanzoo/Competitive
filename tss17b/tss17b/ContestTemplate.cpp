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
    int n, q, currX, currY;
    int furthestIndex = 0;
    int furthestDestroyed = 0;
    vector<double>disHouse;
    unordered_map<int, int>ranges;
    vector<int>sortedRanges;
    vector<int>rangesInOrder;
    cin >> n >> q;
    for (int i = 0; i < n; i++)
    {
        cin >> currX >> currY;
        disHouse.push_back(sqrt(pow(currX,2) + pow(currY,2)));
    }
    sort(disHouse.begin(), disHouse.end());
    for (int i = 0; i < q; i++)
    {
        cin >> currX;
        ranges.emplace(currX, 0);
        sortedRanges.push_back(currX);
        rangesInOrder.push_back(currX);
    }
    sort(sortedRanges.begin(), sortedRanges.end());
    for (int i = 0; i < q; i++)
    {
        int currentIndex = furthestIndex;
        int currentDestroyed = furthestDestroyed;
        if (currentIndex >= disHouse.size())
        {
            //covers all
        }
        else
        {
            for (int j = currentIndex; j < disHouse.size(); j++)
            {
                if (disHouse[j] <= sortedRanges[i])
                {
                    currentDestroyed++;
                }
                else
                {
                    furthestIndex = j;
                    furthestDestroyed = currentDestroyed;
                    break;
                }
            }
        }
        ranges.erase(sortedRanges[i]);
        ranges.emplace(sortedRanges[i], currentDestroyed);
    }
    for (int i = 0; i < q; i++)
    {
        cout << ranges.at(rangesInOrder[i]) << "\n";
    }
    return 0;
}

