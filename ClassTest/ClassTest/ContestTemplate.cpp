// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class MyClass {
public: int index;
public: int freq;
};



int main()
{


    ios_base::sync_with_stdio(0);
    cin.tie(0);


    vector<MyClass> test;

    MyClass mm = MyClass();
   
    mm.index = 1;
    mm.freq = 4;
    test.push_back(mm);

    mm = MyClass();

    mm.index = 2;
    mm.freq = 3;

    test.push_back(mm);

    sort(test.begin(), test.end(), [](const MyClass& lhs, const MyClass& rhs) {
        return lhs.freq < rhs.freq;
        });


    cout << "Hello World!\n";
    return 0;
}

