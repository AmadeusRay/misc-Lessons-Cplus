#include <iostream>
#include <string>
//using namespace std;

int main()
{
	std::string MyString;

	MyString = "My dog's name is: ";
	std::string first = "Spot ";
	std::string last = "Jones";

	/* MyString += first;
	MyString += last; */

	MyString += (first + last);  // parathesis insure that these are in the right order.

	std::cout << MyString << std::endl;


	system("pause");

}