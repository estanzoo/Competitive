#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector <string> dPerms;

void generatePerms()
{
	char mm[] = { 'c','d','e','e','k','r' };
	do
	{
		string temp;
		temp += mm[0];
		temp += mm[1];
		temp += mm[2];
		temp += mm[3];
		temp += mm[4];
		temp += mm[5];
		dPerms.push_back(temp);
	} while (next_permutation(mm, mm + 6));
}

int main()
{
	bool bjava = false, bcpp = false, dereck = false;
	generatePerms();
	string str;
	getline(cin, str, '\n');
	replace(str.begin(), str.end(), '3', 'e');
	replace(str.begin(), str.end(), '5', 's');
	replace(str.begin(), str.end(), '@', 'a');
	replace(str.begin(), str.end(), '7', 't');
	replace(str.begin(), str.end(), '1', 'i');
	for (int i = 0; i < 360; i++)
	{
		if (str.find(dPerms[i]) != string::npos)
		{
			dereck = true;
			break;
		}
	}
	if (str.find("biginteger") != string::npos || str.find("apics") != string::npos)
		bjava = true;
	if ((dereck && bjava) || (!dereck && !bjava))
		cout << "Right Dere(c)k!";
	else
		cout << "Wrong Dere(c)k!";
	return 0;

}