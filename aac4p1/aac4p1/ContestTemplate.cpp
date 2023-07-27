// ContestTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <bits/stdc++.h>

using namespace std;

string myString;
int findNthOccur(string str, int N)
{
	int occur = 0;
	// Loop to find the Nth
	// occurrence of the character
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '0') {
			occur += 1;
		}
		if (occur == N)
			return i;
	}
	return -1;
}

int main()
{
	int n, m;
	cin >> n >> m;
	cin >> myString;
	int* cheerValue = new int[m];
	int highestCheer = -1;
	int highestIndex = -1;
	for (int i = 0; i < m; i++)
	{
		int currCheer;
		cin >> currCheer;
		if (currCheer >= highestCheer)
		{
			highestCheer = currCheer;
			highestIndex = i;
		}
	}
	int strIndex = findNthOccur(myString, highestIndex+1);
	string leftString = myString.substr(0, strIndex+1);
	myString = myString.substr(strIndex+1);
	myString += leftString;
	myString.erase(remove(myString.begin(), myString.end(), '0'), myString.end());
	cout << myString << "\n";
}

