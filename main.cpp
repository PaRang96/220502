#include <iostream>
using namespace std;

int main()
{
	int SumThree = 0;

	for (int Index = 3; Index <= 100; Index += 3)
	{
		SumThree += Index;
	}
	
	cout << "3�� ����� ��: " << SumThree << endl;

	return 0;
}