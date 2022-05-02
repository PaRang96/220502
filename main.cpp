#include <iostream>
using namespace std;

int main()
{
	char star = '*';
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			cout << star;
		}
		cout << endl;
	}
	return 0;
}