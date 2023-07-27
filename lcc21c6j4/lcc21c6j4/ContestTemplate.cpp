// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, currL, currP;
    vector <int> levels;
    vector <int> points;
    unordered_map <int, vector<int>> pointLocations;
    unordered_map <int, int> sums;
    ll maxSum = 0;
    cin >> n >> m;
    m++;
    for (int i = 0; i < n; i++)
    {
        cin >> currL >> currP;
        levels.push_back(currL);
        points.push_back(currP);
        if (pointLocations.find(currL) == pointLocations.end())
        {
            vector <int> a;
            a.push_back(i);
            pointLocations.emplace(currL, a);
            sums.emplace(currL, currP);
        }
        else
        {
            vector <int> a = pointLocations.at(currL);
            a.push_back(i);
            pointLocations.erase(currL);
            pointLocations.emplace(currL, a);
            int newSum = sums.at(currL);
            sums.erase(currL);
            sums.emplace(currL, newSum + currP);
        }
    }
    if (n <= m)
    {
        for (int a : points)
            maxSum += a;
    }
    else
    {
        ll currentSum = 0;
        unordered_set<int> includedLevels;
        for (int i = 0; i < m; i++)
        {
            vector <int> currentArr = pointLocations.at(levels[i]);
            if (includedLevels.find(levels[i]) == includedLevels.end() && currentArr[0] >= i && currentArr[0] <= m - 1 && currentArr[currentArr.size() - 1] <= m - 1 && currentArr[currentArr.size() - 1] >= i) {
                currentSum += sums.at(levels[i]);
                includedLevels.emplace(levels[i]);
            }
        }
        maxSum = currentSum;
        for (int i = 0; i < n - m; i++)
        {
            vector <int> currentArr = pointLocations.at(levels[i]);
            if (includedLevels.find(levels[i]) != includedLevels.end() && currentArr[0] >= i && currentArr[0] <= i + m - 1 && currentArr[currentArr.size() - 1] <= i + m - 1 && currentArr[currentArr.size() - 1] >= i) {
                currentSum -= sums.at(levels[i]);
                includedLevels.erase(levels[i]);
            }
            currentArr = pointLocations.at(levels[i + m]);
            if (includedLevels.find(levels[i + m ]) == includedLevels.end() && currentArr[0] >= i+1 && currentArr[0] <= i + m  && currentArr[currentArr.size() - 1] <= i + m  && currentArr[currentArr.size() - 1] >= i+1) {
                currentSum += sums.at(levels[i + m]);
                includedLevels.emplace(levels[i + m]);
            }


            if (currentSum > maxSum)
                maxSum = currentSum;
        }
    }
    cout << maxSum;
    return 0;
}