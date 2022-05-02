#include <iostream>
using namespace std;

int main()
{
	int Sum = 0;

	for (int Index = 1; Index <= 100; Index++)
	{
		Sum += Index;
	}
	
	cout << Sum << endl;

	return 0;
}