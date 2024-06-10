#include <iostream>
using namespace std;

struct StructName {

	//members or fields.
	int x;
	float y;

	//member functions (methods in programmer languages such as c#)
	void ToString() { cout << "Hello from StructName!" << endl; };
};

int main() {

	//declare variable instance (object) of type StructName and initialize its members.
	StructName demoInstance = { 13, 15.5f };

	//Access members using the 'Dot Operator'
	cout << demoInstance.x << endl;

	demoInstance.x = 999;
	cout << demoInstance.x << endl;

	demoInstance.ToString();

	cout << sizeof(demoInstance) << endl;

	return 0;
}