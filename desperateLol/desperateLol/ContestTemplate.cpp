// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int findSquare(vector<vector<bool>> map, int y, int x, int length)
{
    vector <int> lengths;
    while (true) //left top
    {
        length += 1;
        for (int i = x; i <= length + x; i++)
        {
            if (map[y + length][i] == true)
                lengths.push_back(length);
        }
        for (int i = y; i <= length + y; i++)
        {
            if (map[i][x + length] == true)
                lengths.push_back(length);
        }
    }
    while (true) //right middle
    {
        length += 1;
        for (int i = x; i <= length + x; i++)
        {
            if (map[y + length][i] == true)
                lengths.push_back(length);
        }
        for (int i = y; i <= length + y; i++)
        {
            if (map[i][x + length] == true)
                lengths.push_back(length);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, currX, currY, currMax = 0, currNum;
    cin >> n >> m;
    vector<vector<bool>> grid(n + 2, vector<bool>(n + 2, false));
    vector<vector<int>> trees(m, vector<int>(2, 0));
    for (int i = 0; i < n + 2; i++)
    {
        grid[0][i] = true;
        grid[i][0] = true;
        grid[n + 1][i] = true;
        grid[i][n + 1] = true;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> currX >> currY;
        grid[currX][currY] = true;
        trees[i].push_back(currX);
        trees[i].push_back(currY);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 8; j++)
    }
}
