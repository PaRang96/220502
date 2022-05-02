#include <iostream>
using namespace std;

int main()
{
	int Score = 0;

	cin >> Score;

	if (Score > 100 || Score < 0)
	{
		cout << "Bad Input" << endl;
	}
	else if (Score > 90 && Score <= 100)
	{
		cout << "A" << endl;
	}
	else if (Score > 80 && Score <= 90)
	{
		cout << "B" << endl;
	}
	else if (Score > 70 && Score <= 80)
	{
		cout << "C" << endl;
	}
	else if (Score > 60 && Score <= 70)
	{
		cout << "D" << endl;
	}
	else
	{
		cout << "F" << endl;
	}

	return 0;
}