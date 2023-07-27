// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <ctype.h>
using namespace std;

vector <string> sepWords;
vector <string> sepWithChar;

void removeDupWord(string str)
{
    string word = "";
    for (int i = 0; i < str.length(); i++)
    {

        //if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        if (str[i] != ' ' && str[i] != ',' && str[i] != '.' && str[i] != ';' && str[i] != '-')
        {
            word = word + str[i];
        }
        else if (str[i] == ' ' || i == str.length() - 1) {
            sepWords.push_back(word);
            word = "";
        }
    }
    word = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (i == str.length() - 1)
        {
            word = word + str[i];
            sepWithChar.push_back(word);
            word = "";
        }
        if (str[i] == ' ')
        {
            sepWithChar.push_back(word);
            word = "";
        }
        else
        {
            word = word + str[i];
        }
    }
}

string toLower(string str)
{
    string a = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            a += str[i] + 32;
        }
        else
            a += str[i];
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unordered_map <string, int> words;
    string n, currWord = "";
    getline(cin, n);
    removeDupWord(n);
    int size = sepWords.size();
    for (int i = 0; i < size; i++)
    {
        if (words.find(toLower(sepWords[i])) == words.end()) //not found
        {
            words.emplace(toLower(sepWords[i]), i + 1);
            if (i != size - 1)
                cout << sepWithChar[i] << " ";
            else
                cout << sepWithChar[i] ;
        }
        else
        {
            if (i != size - 1)
                cout << words.at(toLower(sepWords[i])) << " ";
            else
            {
                cout << words.at(toLower(sepWords[i])) << ".";
            }
        }
    }
    return 0;
}

