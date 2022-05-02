#include <iostream>
using namespace std;

int main()
{
	int EvenSum = 0;
	int OddSum = 0;

	for (int Index = 1; Index <= 100; Index++)
	{
		if (Index % 2 == 0)
		{
			EvenSum += Index;
		}
		else
		{
			OddSum += Index;
		}
	}
	
	cout << "Â¦¼öÀÇ ÇÕ: " << EvenSum << endl;
	cout << "È¦¼öÀÇ ÇÕ: " << OddSum << endl;

	return 0;
}