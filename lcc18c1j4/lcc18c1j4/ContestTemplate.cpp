#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int myresult[6] = { 0 };

vector<string> splitString(char current[])
{
	int istart = -1;
	int i = 0;
	string strtmp;
	vector<string> result;
	do {
		if (current[i] >= 'a' && current[i] <= 'z')
		{
			if (istart == -1)
				istart = i;
			i++;

		}
		else
		{
			switch (current[i])
			{
			case '@':
				current[i] = 'a';
				if (istart == -1)
					istart = i;
				i++;
				break;
			case '5':
				current[i] = 's';
				if (istart == -1)
					istart = i;
				i++;
				break;
			case '3':
				current[i] = 'e';
				if (istart == -1)
					istart = i;
				i++;
				break;
			case '7':
				current[i] = 't';
				if (istart == -1)
					istart = i;
				i++;
				break;
			case '1':
				current[i] = 'i';
				if (istart == -1)
					istart = i;
				i++;
				break;
			default:
				if (istart != -1)
				{
					strtmp = string(&current[istart], i - istart);
					result.emplace_back(strtmp);
					istart = -1;
				}
				i++;
				break;
			}
		}
	} while (current[i] != 0);
	if (istart != -1)
	{
		strtmp = string(&current[istart], i - istart);
		result.emplace_back(strtmp);
	}

	return result;
}

int dcount(string source)
{
	for (int i = 0; i < 6; i++)
		myresult[i] = 0;
	for (char ch : source)
	{
		switch (ch)
		{
		case 'c':
			myresult[0]++;
			break;
		case 'd':
			myresult[1]++;
			break;
		case 'e':
			myresult[2]++;
			break;
		case 'k':
			myresult[3]++;
			break;
		case 'r':
			myresult[4]++;
			break;
		default:
			break;
		}
	}
	return 0;
}

int main()
{
	char szBuf[100001];
	if (!cin.getline(szBuf, 100001))
		cout << "error" << endl;

	vector<string> mm = splitString(szBuf);

	bool derek = false, bjava = false, bcpp = false, dereck = false;
	int imax = mm.size();
	for (int i = 0; i < imax; i++)
	{
		if (!bcpp)
		{
			if (mm[i].compare("fault") == 0 || mm[i].compare("segmentation") == 0)
				bcpp = true;
		}
		if (!bjava)
		{
			if (mm[i].compare("apics") == 0 || mm[i].compare("biginteger") == 0)
				bjava = true;
		}

		//if (mm[i].size() == 6 || mm[i].size() == 5)
		{
			//	sort(mm[i].begin(), mm[i].end());
			dcount(mm[i]);
			if (myresult[1] > 0 && myresult[2] >= 2 && myresult[3] > 0 && myresult[4] >= 1)
			{

				if (myresult[0] >= 1)
					dereck = true;
				else
					derek = true;

			}
		}
		if (bjava == true && dereck == true)
			break;
		else if (bcpp == true && derek == true)
			break;
	}
	if (bjava == true && dereck == true)
		cout << "Right Dere(c)k!";
	else if (bcpp == true && derek == true)
		cout << "Right Dere(c)k!";
	else
		cout << "Wrong Dere(c)k!";
	return 0;
}