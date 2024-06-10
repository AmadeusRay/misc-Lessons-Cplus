//#include <iostream>
//using namespace std;
//
//class Entity
//{
//public:
//	Entity& operator++();
//	Entity operator++(int);
//	int getMember();
//
////private:
//	int member{1};
//};
//
//Entity& Entity::operator++()
//{
//	++member;
//	return *this;
//}
//
//Entity Entity::operator++(int)
//{
//	Entity temp = *this;
//	++*this;
//	return temp;
//}
//
//int Entity::getMember()
//{
//	return member;
//}
//
//int main()
//{
//	Entity entity1;
//
//	(++entity1).member += 5;
//
//	cout << entity1.getMember() <<endl;
//
//	return 0;
//}

#include <iostream>
using namespace std;

class Entity
{
public:
	Entity& operator++();
	Entity operator++(int n);
	int getMember();

	//private:
	int member{ 1 };
};

Entity& Entity::operator++()
{
	++member;
	return *this;
}

Entity Entity::operator++(int n)
{
	Entity temp = *this;
	if (n != 0)
	{
		//increment n times
		member += n;

	}
	else
		++member;
	
	return temp;
}

int Entity::getMember()
{
	return member;
}

int main()
{
	Entity entity1;

	entity1.operator++(55);

	cout << entity1.getMember() << endl;

	return 0;
}