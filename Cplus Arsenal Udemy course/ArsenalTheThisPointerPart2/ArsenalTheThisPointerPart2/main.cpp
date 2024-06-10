#include <iostream>
using namespace std;

struct Entity
{
	int member = 0;

	void compare(const Entity& other)
	{
		if (this == &other) // means if (this is the same as the other object)
		{
			cout << "The objects compared identical" << endl;
		}
		else
		{
			cout << "The objects compared are not identical" << endl;
		}
	}
};

int main()
{
	Entity entity1, entity2;

	entity1.compare(entity2);

	cout << endl;
	return 0;
}