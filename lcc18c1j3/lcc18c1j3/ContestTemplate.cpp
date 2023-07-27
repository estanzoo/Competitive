// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    string num1, num2, final = "";
    char op;
    cin >> n >> num1 >> op >> num2;
    if (op == '&')
    {
        for (int i = 0; i < n; i++)
        {
            if (num1[i] == '1' && num2[i] == '1') final += "1";
            else final += "0";
        }
    }

    else if (op == '^')
    {
        for (int i = 0; i < n; i++)
        {
            if (num1[i] == '1' ^ num2[i] == '1') final += "1";
            else final += "0";
        }
    }

    else if (op == '|')
    {
        for (int i = 0; i < n; i++)
        {
            if (num1[i] == '1' || num2[i] == '1') final += "1";
            else final += "0";
        }
    }
    
    cout << final;
    return 0;
}

