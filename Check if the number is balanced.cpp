/*
	Check if the number is balanced :-

	LINK:   https://practice.geeksforgeeks.org/problems/check-if-the-number-is-balanced3014/1
*/

#include <iostream>
using namespace std;

class Solution
{
public:
	bool balancedNumber(string N)
	{
		int size = N.size();
		int mid = size / 2;

		int midElement = (int)(N[mid]);

		int firstSum = 0, secondSum = 0;

		for (int i = 0; i < mid; i++)
		{
			firstSum = firstSum + (int)(N[i]);
		}

		for (int i = mid + 1; i < size; i++)
		{
			secondSum = secondSum + (int)(N[i]);
		}

		if (firstSum == secondSum)
			return true;

		else
			return false;
	}
};

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string N;
		cin >> N;

		Solution ob;
		cout << ob.balancedNumber(N) << "\n";
	}

	return 0;
}