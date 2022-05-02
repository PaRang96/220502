#include <iostream>
using namespace std;

int main()
{
	int ComplexSum = 0;

	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			ComplexSum -= i;
		}
		else
		{
			ComplexSum += i;
		}
	}

	cout << ComplexSum << endl;

	return 0;
}