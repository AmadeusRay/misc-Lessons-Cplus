#include <iostream>
#include <string>
using namespace std;

/*
void ChangeStr(string str);

int main()
{
	string myStr = "Druid";

	ChangeStr(myStr);

	cout << myStr << endl;

	system("pause");
}

void ChangeStr(string str)
{
	str += "!";
}

won't show exclamation point. Missing reference.    "&".
Below includes "&" in two spots of Void ChangeStr
*/

void ChangeStr(string& str); // can't be done with const, 
//since const can't be changed.

int main()
{
	string myStr = "Druid";

	ChangeStr(myStr);   // calls the action for ChangeStr 
	//holding "druid" within myStr. ChangeStr is defined below, 
	//where it adds "!".

	cout << myStr << endl;

	system("pause");
}

void ChangeStr(string& str)
{
	str += "!";
}