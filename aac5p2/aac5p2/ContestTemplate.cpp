// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

bool prime(int n)
{
    bool isPrime = true;
    for (int i = 2; i <= n / 2; ++i) 
    {
        if (n % i == 0) 
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main()
{
    int n;
    cin >> n;
    int* numbers = new int[n];
    int* products = new int[n];
    for (int i = 1; i < n; i++)
    {

    }
    return 0;
}

