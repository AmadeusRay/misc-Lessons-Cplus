//#include <iostream>
//using namespace std;
//
//struct Entity
//{
//	int member;
//
//	void ToString() 
//{
//		cout << member << endl;
//	}
//};
//
//int main()
//{
//	Entity entity1{ 5 };
//	entity1.ToString();
//
//	return 0;
//};

#include <iostream>
using namespace std;

struct Entity
{
	static int s_Member; //declaration
	int member2 = 550;;

	void ToString()
	{
		cout << s_Member << endl;
		cout << member2 << endl;
	}
};

//definition
int Entity::s_Member = 700;

int main()
{
	Entity::s_Member = 822;

	Entity entity1;

	entity1.ToString();

	return 0;
};