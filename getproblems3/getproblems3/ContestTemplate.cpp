// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector <int> sensors;
    for (int i = 0; i < 1000; i++)
    {
        sensors.push_back(0);
    }
    int n, largest = 1, secondLargest = 1, curr, numOne, numTwo, oneCount = 0, twoCount = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> curr;
        sensors[curr - 1] += 1;
        if (sensors[curr - 1] > largest)
            largest = sensors[curr - 1];
        else if (sensors[curr - 1] > secondLargest)
            secondLargest = sensors[curr - 1];
    }
    for (int i = 0; i < 1000; i++)
    {
        if (sensors[i] == largest)
            oneCount++;
        if (sensors[i] == secondLargest)
            twoCount++;
    }
    if (oneCount >= 2 || largest == secondLargest)
    {
        for (int i = 999; i >= 0; i--)
        {
            if (sensors[i] == largest)
            {
                numOne = i + 1;
                break;
            }
        }
        for (int i = 0; i < 1000; i++)
        {
            if (sensors[i] == largest)
            {
                numTwo = i + 1;
                break;
            }
        }
        cout << abs(numOne - numTwo) << "\n";
    }
    else if (largest > secondLargest)
    {
        bool largestTaken = false, secondTaken = false;
        int caseOneBig, caseOneSmall, caseTwoBig, caseTwoSmall; //case one = largest at front
        for (int i = 0; i < 1000; i++)
        {
            if (sensors[i] == largest && largestTaken == false)
            {
                caseOneBig = i + 1;
                largestTaken = true;
            }
            if (sensors[i] == secondLargest && secondTaken == false)
            {
                caseTwoSmall = i + 1;
            }
            if (largestTaken && secondTaken)
                break;
        }
        largestTaken = false, secondTaken = false;
        for (int i = 999; i >= 0; i--)
        {
            if (sensors[i] == largest && largestTaken == false)
            {
                caseTwoBig = i + 1;
                largestTaken = true;
            }
            if (sensors[i] == secondLargest && secondTaken == false)
            {
                caseOneSmall = i + 1;
            }
            if (largestTaken && secondTaken)
                break;
        }
        int caseOne = abs(caseOneBig - caseOneSmall);
        int caseTwo = abs(caseTwoBig - caseTwoSmall);
        if (caseOne > caseTwo)
            cout << caseOne << "\n";
        else
            cout << caseTwo << "\n";
    }
    return 0;
}

