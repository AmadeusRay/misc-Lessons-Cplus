#include <iostream>
using namespace std;

bool isEqual(int x, int y)
{
	return (x == y);
}

int main()
{
	int Character1PowerLevel{ 9000 }, Character2PowerLevel{ 9000 };

	//bool isEquallyMatched = isEqual(Character1PowerLevel, Character2PowerLevel);

	if (isEqual(Character1PowerLevel, Character2PowerLevel))
	{
		cout << "The fight ended in a tie!\nAnd the crowd goes mad!" << endl;
	}

	cout << endl;
	return 0;
}