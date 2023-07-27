#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
int findSquare(vector<vector<bool>> map, int y, int x, int length)
{
    length += 1;
    for (int i = x; i <= length + x; i++)
    {
        if (map[y + length][i] == true)
            return length;
    }
    for (int i = y; i <= length + y; i++)
    {
        if (map[i][x + length] == true)
            return length;
    }
    return findSquare(map, y, x, length);
}
*/
unordered_map <int, int> trees;
int findSquare(int y, int x, int n1)
{
    int length = 0;
    while (true)
    {
        length += 1;
        if (length + x >= n1 - 1 || length + y >= n1 - 1)
            return length - 1;
        for (int i = x; i <= length + x; i++)
        {
            if (trees.find(y+length) != trees.end() && trees.at(y+length) == (i))
                return length;
        }
        for (int i = y; i <= length + y; i++)
        {
            if (trees.find(i) != trees.end() && trees.at(i) == (x+length))
                return length;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, currX, currY, currMax = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> currY >> currX;
        trees.emplace(currY - 1, currX - 1);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (trees.find(i) == trees.end() || trees.at(i) != j)
            {
                int currNum = findSquare(i, j, n);
                if (currMax < currNum)
                    currMax = currNum;
            }
        }
    }
    cout << currMax;
    
    return 0;
}

