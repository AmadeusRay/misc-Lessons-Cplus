#include <iostream>
#include <string>
using namespace std;

void Print(string str); // the grey text does not call the specific string, it just's saying a string will be there.
void Print(int i);
void Print(string str1, string str2);
void Print(int i, string str); 

int main()
{
	int myInt = 1;
	string myStr = "Alan";
	string mySecondStr = "Jones";

	Print(myStr);                       // does the actual command. 
	Print(mySecondStr);
	Print(myInt);
	Print(myInt, mySecondStr);                 // puts SecondStr for str void Print(int i, string str)

	Print(myStr, mySecondStr);

	system("pause");
}

void Print(string str)
{
	cout << str << endl;
}

void Print(int i)
{
cout << i << endl;
}

void Print(string str1, string str2)
{
	cout << "String 1:" << str1 << endl;
	cout << "String 2:" << str2 << endl;
}

void Print(int i, string str)
{
	cout << "Integer value: " << i << endl;
	cout << "String value: " << str << endl;
}