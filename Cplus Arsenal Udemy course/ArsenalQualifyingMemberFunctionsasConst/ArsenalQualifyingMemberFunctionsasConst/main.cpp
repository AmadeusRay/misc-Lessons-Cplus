//#include <iostream>
//using namespace std;
//
//class Entity
//{
//public:
//	int getMember() const; // < -- so you can add const when you intialize.
//
//private:
//	int member = 15;
//};
//
//int Entity::getMember() const // <---  const, so you can't add anything in the getter.
//// adding a number in the getter can cause huge problems since it would override
//// inputs and you wouldn't know.
//{
//	return member;
//}
//
//int main()
//{
//	Entity entity1;
//
//	cout << entity1.getMember() << endl;
//
//	cout << endl;
//
//}



//// how to work around to create an override const
//
//#include <iostream>
//using namespace std;
//
//class Entity
//{
//public:
//	int getMember(); // declaring non const version.
//	int getMember() const;
//	void setMember(int memberP);
//
//private:
//	int member1 = 15;
//};
//
//int Entity::getMember() // without const, we can add 100
//{
//	member1 = 100;
//	return member1;
//}
//
//int Entity::getMember() const  // because of const, we can't add 100
//{
//	return member1;
//}
//
//void Entity::setMember(int memberP)
//{
//	member1 = memberP;
//}
//
//void print(const Entity& entityP)
//{
//	cout << entityP.getMember() << endl;
//}
//
//int main()
//{
//	Entity entity1; // none const version.
//
//	cout << entity1.getMember() << endl;
//
//	const Entity ENTITY_2; // const version
//
//	cout << ENTITY_2.getMember() << endl;
//
//	cout << endl;
//	return 0;
//
//}


//creating modifiable versions

#include <iostream>
using namespace std;

class Entity
{
public:
	int getMember(); // declaring non const version.
	int getMember() const;
	void setMember(int memberP);

private:
	mutable int member1 = 15; // mutable, makes it modifiable
};

int Entity::getMember() // without const, we can add 100
{
	member1 = 100;
	return member1;
}

int Entity::getMember() const  // because of const, we can't add a number
{
	member1 = 55; // BUT because of mutable int in private section, we can a number
	return member1;
}

void Entity::setMember(int memberP)
{
	member1 = memberP;
}

void print(const Entity& entityP)
{
	cout << entityP.getMember() << endl;
}

int main()
{
	Entity entity1; // none const version.

	cout << entity1.getMember() << endl;

	const Entity ENTITY_2; // const version

	cout << ENTITY_2.getMember() << endl;

	cout << endl;
	return 0;

}