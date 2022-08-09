/*
	C++ Switch Case Statement :-

	LINK:   https://practice.geeksforgeeks.org/problems/c-switch-case-statement5900/1#
*/

#include <iostream>
using namespace std;

class Solution
{
public:
	string isInRange(int n)
	{
		string s;

		switch (n)
		{
		case 1:
			s = "one";
			break;

		case 2:
			s = "two";
			break;

		case 3:
			s = "three";
			break;

		case 4:
			s = "four";
			break;

		case 5:
			s = "five";
			break;

		case 6:
			s = "six";
			break;

		case 7:
			s = "seven";
			break;

		case 8:
			s = "eight";
			break;

		case 9:
			s = "nine";
			break;

		case 10:
			s = "ten";
			break;

		default:
			s = "not in range";
			break;
		}

		return s;
	}
};

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int N;
		cin >> N;

		Solution ob;
		cout << ob.isInRange(N) << "\n";
	}

	return 0;
}