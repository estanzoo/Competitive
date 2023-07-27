// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <climits>
using namespace std;

int main()
{
	int n, min = -1, max = INT_MAX;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int iMin, iMax;
		cin >> iMin >> iMax;
		if (iMin > min)
		{
			min = iMin;
		}
		if (max > iMax)
			max = iMax;
	}
	if (min <= max)
		cout << min << " " << max;
	else
		cout << -1;
}