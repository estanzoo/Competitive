// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;



class Pair {
public: char character;
public: string binary;
};


bool sortFunction(string i, string j)
{
    if (i.length() != j.length())
        return i.length() < j.length();
    else
    {
        return i < j;
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   
    int n, m;
    string message;
    string message2;
    vector <Pair> keys;

    cin >> n >> m >> message;
    message2 = message;
    for (int i = 0; i < n; i++)
    {
        Pair curr = Pair();
        cin >> curr.character;
        cin >> curr.binary;
        keys.push_back(curr);
    }
    sort(keys.begin(), keys.end(), [](const Pair& lhs, const Pair& rhs) {
        if (lhs.binary.length() != rhs.binary.length())
            return lhs.binary.length() > rhs.binary.length();
        else 
            return lhs.character < rhs.character;
        });
    string left = "";
    string right = "";
  
    string target = message;
    while (target.length() != 0)
    {
        for (int i = 0; i < n; i++) {
            if (target.length() >= keys[i].binary.length())
            {
                if (target.substr(0, keys[i].binary.length()).compare(keys[i].binary) == 0)
                {
                    left = left + keys[i].character;
                    target = target.substr(keys[i].binary.length(), target.length() - (keys[i].binary.length()));
                    break;
                }

                if (target.substr(target.length() - (keys[i].binary.length()), keys[i].binary.length()).compare(keys[i].binary) == 0)
                {
                    right = keys[i].character + right;
                    target = target.substr(0, target.length() - (keys[i].binary.length()));
                    break;
                }
            }
        }
    }
    string an1 = left + right;
    left = "";
    right = "";
    target = message;
    while (target.length() != 0)
    {
        for (int i = 0; i < n; i++) {
            if (target.length() >= keys[i].binary.length())
            {
                if (target.substr(target.length() - (keys[i].binary.length()), keys[i].binary.length()).compare(keys[i].binary) == 0)
                {
                    right = keys[i].character + right;
                    target = target.substr(0, target.length() - (keys[i].binary.length()));
                    break;
                }
                if (target.substr(0, keys[i].binary.length()).compare(keys[i].binary) == 0)
                {
                    left = left + keys[i].character;
                    target = target.substr(keys[i].binary.length(), target.length() - (keys[i].binary.length()));
                    break;
                }

                
            }
        }
    }
    string an2 = left + right;
    string answer;
    if (an1.length() < an2.length())
        answer = an1;
    else if (an1.length() > an2.length())
        answer = an2;
    else
    {
        if (an1.compare(an2) < 0)
            answer = an2;
        else
            answer = an1;
    }
    cout << answer;
    cout << "\n";
    return 0;
}

