// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
/*
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
*/

int countZero(int n)
{
    if (n <= 0) 
        return 1;
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
    return count;
}
int main()
{
    int n, current;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> current;
            cout << countZero(current) << "\n";
    }
    return 0;
}