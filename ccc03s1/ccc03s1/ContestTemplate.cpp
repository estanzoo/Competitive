// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int currPos = 1, currAdd;
    int size;
    int *test = new int[size];
    test[0];
    while (true)
    {
        cin >> currAdd;
        if (currAdd == 0)
        {
            cout << "You Quit!" << "\n";
            break;
        }
        else
        {
            currPos += currAdd;
            if (currPos == 54) //first snake
                currPos = 19;
            else if (currPos == 9) //first ladder
                currPos = 34;
            else if (currPos == 40) //second ladder
                currPos = 64;
            else if (currPos == 90) //second snake
                currPos = 48;
            else if (currPos == 67) //third ladder
                currPos = 86;
            else if (currPos == 99) //third snake
                currPos = 77;
            if (currPos > 100)
                currPos -= currAdd;
            cout << "You are now on square " << currPos << "\n";
            if (currPos == 100)
            {
                cout << "You Win!" << "\n";
                break;
            }
        }
    }
    //cout << "Hello World!\n";
    return 0;
}

