// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <climits>
#include <queue>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <set>
using namespace std;

int main()
{
	int n, s;
	//vector<vector<int>> countries(n/s, vector<int>(2));
	unordered_map<int, vector<int>> countries;
	int* scores = new int[n];
	cin >> n >> s;
	for (int i = 0; i < (n / s); i++)
	{
		int curr, curr1;
		cin >> curr >> curr1;
		countries[i] = vector<int>();
		countries[i].push_back(curr);
		countries[i].push_back(curr1);
	}
	for (int i = 0; i < (s - 1) * n / 2; i++)
	{
		int curr, curr1;
		char status;
		if (status == 'W')
		{
			scores[curr - 1]+=3;
		}
		else if (status == 'L')
			scores[curr1 - 1]+=3;
		else
		{
			scores[curr - 1]++;
			scores[curr1 - 1]++;
		}
	}
	int place;
	cin >> place;
	for (int i = 0; i < (n / s); i++)
	{
		
	}
		
	
}

