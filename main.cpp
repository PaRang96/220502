#include <iostream>
using namespace std;

int main()
{
	char star = '*';
	for (int j = 1; j <= 5; j++)
	{
		for (int i = 0; i < j; i++)
		{
			cout << star;
		}
		cout << '\n';
	}
	return 0;
}