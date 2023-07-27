// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

const int MAX_CHAR = 26;
string sortString(string str)
{
    string a = "";
    int charCount[MAX_CHAR] = { 0 };
    for (int i = 0; i < str.length(); i++)
        charCount[str[i] - 'a']++;
    for (int i = 0; i < MAX_CHAR; i++)
        for (int j = 0; j < charCount[i]; j++)
            a += (char)('a' + i);
    return a;
}
int main()
{
    string ok = sortString("dereck");
    cout << ok;
    return 0;
}

