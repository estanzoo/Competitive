// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, lHigh = -1, rHigh = -1, rightResult, leftResult;
    cin >> n;
    vector<int> candy;
    vector<int> fromLeft;
    vector<int> fromRight;
    for (int i = 0; i < n; i++)
    {
        int curr;

        cin >> curr;
        candy.push_back(curr);
        if (lHigh < candy[i])
            lHigh = candy[i];
        fromLeft.push_back(lHigh);
        fromRight.push_back(0);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (rHigh < candy[i])
            rHigh = candy[i];
        fromRight[i] = rHigh;
    }
    for (int i = 0; i < n; i++)
    {
        if (candy[i] >= i)
            leftResult = -1;
        else
            leftResult = fromLeft[i - candy[i]-1];
        if (candy[i] >= n - 1 - i)
            rightResult = -1;
        else
            rightResult = fromRight[i + candy[i] + 1];
        if (leftResult == -1 && leftResult == rightResult)
            cout << -1 << "\n";
        else if (leftResult >= rightResult && leftResult != 1)
            cout << leftResult << "\n";
        else if (leftResult < rightResult)
            cout << rightResult << "\n";
    }
    return 0;
}

