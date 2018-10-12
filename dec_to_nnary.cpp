
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

string to_nnary(unsigned int dec,int n)
{
	unsigned int temp, a = 0;
	string s, result;
	while (dec != 0)
	{
		temp = dec;
		temp = temp / n;
		a = dec % n;
		dec = temp;
		s += to_string(a);
	}
	for (int i = s.length() - 1; i >= 0; i--)
		result += s[i];
	return result;
}

int main()
{
	cout << "Enter dec:";
	int dec;
	cin >> dec;
	cout << "Choose your destiny(2,3,8):";
	int n;
	cin >> n;
	cout << to_nnary(dec,n) << endl;
	system("pause");
	return 0;
}
