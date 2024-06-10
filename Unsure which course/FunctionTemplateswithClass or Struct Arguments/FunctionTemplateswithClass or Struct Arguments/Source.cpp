#include <iostream>
using namespace std;

struct Entity
{
	int member;

	bool operator<(const Entity& rho)const
	{
		return this->member < rho.member;
	}
};

template<typename T>

T smallest(T xP, T yP)
{
	return (xP < yP) ? xP : yP;
}

template<typename T>
void print(T param)
{
	cout << param << endl;
}

std::ostream &operator<<(std::ostream &output, const Entity &entityP)
{
	output << entityP.member;
	return output;
}


int main()
{
	Entity entity1{ 22 };
	Entity entity2{ 11 };

	cout << smallest<Entity>(entity1, entity2) << endl;

	print(entity1);

	cout << "\n--- End of Program --" << endl;
	return 0;
}