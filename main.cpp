#include <iostream>
using namespace std;

int main()
{
	int Number = 0;

	cin >> Number;

	char star = '*';
	for (int j = 1; j <= Number; j++)
	{
		for (int i = 0; i <= Number-j; i++)
		{
			cout << star;
		}
		cout << '\n';
	}
	return 0;
}