

#include <iostream>
using namespace std;

/* // Static Variables inside functions
void AddtoCount()
{
	static int count = 0;
	count++;
	cout << count << endl;
}

int main()
{
	for (int i = 0; i < 100; i++)
	{
		AddtoCount();
	}

//	count--; won't work since it's outside. Can't access static variable.

	system("pause");
}

*/ 

// learning to use a class with a bunch of static functions.
class Critter
{
public:

	Critter()
	{
		cout << "A critter is born! \n";
		++CritterCount;
	}

	static void AnnounceCount()  // does 	cout << Critter::CritterCount << endl; in main().
	{
		cout << CritterCount << endl;  
	}

	static int CritterCount; // able to change it later on. 

};

int Critter::CritterCount = 0; // Static has to be intialized out the class.
//A Const int would allow it.
// " = 0; " makes it intialized. 

int main()
{

	Critter::CritterCount = 13;

	cout << Critter::CritterCount << endl; // does the same as below, Critter::AnnounceCount();
	// no critters created but count is 0.

	Critter* crit = new Critter; // added another critter via Critter() dynamically

	Critter::AnnounceCount(); // does the same as above cout << Critter::CritterCount << endl;
	//cleaner

	delete crit;

	system("pause");
}