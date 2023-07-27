// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int oddCounter = 0, evenCounter = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int curr;
        cin >> curr;
        if (curr % 2 == 0) //even
            evenCounter++;
        else
            oddCounter++;
    }
    oddCounter /= 2;
    evenCounter /= 2;

    cout << oddCounter + evenCounter << "\n";
    return 0;
}

