// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int chris = 0, nay = 0, curr;
    cin >> curr;
    chris += curr;
    cin >> curr;
    chris += 5 * curr;
    cin >> curr;
    chris += 10 * curr;
    cin >> curr;
    chris += 20 * curr;
    cin >> curr;
    nay += curr;
    cin >> curr;
    nay += 5 * curr;
    cin >> curr;
    nay += 10 * curr;
    cin >> curr;
    nay += 20 * curr;
    if (chris > nay)
        cout << "Chris";
    else if (nay > chris)
        cout << "Nayaab";
    else
        cout << "Tie";
    cout << "\n";
    return 0;
}

