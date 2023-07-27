// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int N = 100001;

int binarySearch(vector <int> arr, int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x || mid == 0 || mid == arr.size()-1)
            return mid;
        if (arr[mid] > x && mid > 1 && arr[mid - 1] < x)
            return mid ;
        if (arr[mid] < x && mid < arr.size() - 1 && arr[mid + 1] > x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<int> factorNum;
    for (int i = 0; i < N; i++)
        factorNum.push_back(0);
    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j * i < N; j++)
        {
            factorNum[i * j]++;
        }
    }
    vector<vector<int>> matrix;
    for (int i = 0; i < N; i++)
    {
        matrix.push_back(vector<int>(0));
    }
    for (int i = 1; i < N; i++)
    {
        matrix[factorNum[i]].push_back(i);
    }
    int a, b, c, d;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b >> c >> d;
        int indexL = lower_bound(matrix[b].begin(), matrix[b].end(), c) - matrix[b].begin();
        int indexR = upper_bound(matrix[b].begin(), matrix[b].end(), d) - matrix[b].begin();
        cout << indexR - indexL << "\n";
    }
    

    return 0;
}

