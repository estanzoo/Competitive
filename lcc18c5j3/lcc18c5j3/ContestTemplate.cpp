// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int countFive(int a)
{
    int curr = 0;
    while (a % 5 == 0)
    {
        a /= 5;
        curr++;
    }
    return curr;
}

int countTwo(int a)
{
    int curr = 0;
    while (a % 2 == 0)
    {
        a /= 2;
        curr++;
    }
    return curr;
}

int countTen(int a)
{
    int curr = 0;
    while (a % 10 == 0)
    {
        a /= 10;
        curr++;
    }
    return curr;
}
/*
int main()
{
    int n, current, twoCount = 0, fiveCount = 0, currTen, tot = -1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> current;
        if (current == 0)
        {
            tot = 0;
            break;
        }
        else
        {
            twoCount += countTwo(current);
            fiveCount += countFive(current);
        }
    }
    if (tot == 0)
        cout << 1;
    else if (fiveCount < twoCount)
        cout << fiveCount;
    else
        cout << twoCount;
    return 0;
}
*/

int main()
{
    int n, tenCount = 0, current;
    long long product = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> current;
        if (current == 0)
        {
            product = 0;
            break;
        }
        else
        {
            product *= current;
            while (product != 0 && product % 10 == 0)
            {
                product /= 10;
                tenCount++;
            }
            product = product % 1000;
        }
    }
    if (product == 0)
        cout << 1;
    else
        cout << tenCount;
    
    return 0;
}