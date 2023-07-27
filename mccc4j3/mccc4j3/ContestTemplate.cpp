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
	int n, pos = -1, totSum = 0, leftSum = 0;
	cin >> n;
	int* comps = new int[n];
	for (int i = 0; i < n; i++)
	{
		int curr;
		cin >> curr;
		totSum += curr;
		comps[i] = curr;
	}
	for (int i = 0; i < n; i++)
	{
		leftSum += comps[i];
		if ((totSum - leftSum) == leftSum)
		{
			pos = i+1;
			break;
		}
	}
	if (pos != -1)
		cout << pos << "\n";
	else
		cout << "Andrew is sad." << "\n";
}

