//#include <iostream>
//using namespace std;
//
//struct Entity
//{
//	int member = 0;
//
//	void setMember(int member)
//	{
//		//member = member;     // issue is setMember won't cahnge anything. 
//		this->member = member; //can use (*this).member = member;  <-- too messy. 
//	}
//};
//
//int main()
//{
//	Entity entity1;
//	entity1.setMember(400);
//
//	cout << entity1.member << endl;
//
//	cout << endl;
//	return 0;
//}

// option 2

#include <iostream>
using namespace std;

struct Entity
{
	int member = 0;

	void setMember(int memberP)
	{
		member = memberP; // this->member is implied. hidden argument
	}
};

int main()
{
	Entity entity1;
	entity1.setMember(400);

	cout << entity1.member << endl;

	cout << endl;
	return 0;
}