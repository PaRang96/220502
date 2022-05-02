#include <iostream>
using namespace std;

int main()
{
	int Number = 0;

	cin >> Number;

	char star = '*';
	char blank = ' ';

	for (int i = Number; i >= 1; --i)
	{
		for (int j = 1; j <= i-1; j++)
		{
			cout << blank;
		}
		for (int j = 1; j <= Number-i+1; j++)
		{
			cout << star;
		}
		cout << '\n';
	}

	return 0;
}