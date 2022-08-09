/*
	Help the Old Man!!! :-

	LINK:	https://practice.geeksforgeeks.org/problems/help-the-old-man3848/1
*/

#include <iostream>
using namespace std;

static int c, m;

void help_the_old_man(int n, int s, int a, int d)
{
	if (n > 0)
	{
		help_the_old_man(n - 1, s, d, a); // Recursion

		c++;

		// Base Case
		if (m == c)
			cout << s << " " << d << "\n";

		help_the_old_man(n - 1, a, s, d); // Recursion
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n >> m;

		c = 0;

		help_the_old_man(n, 1, 2, 3);
	}

	return 0;
}