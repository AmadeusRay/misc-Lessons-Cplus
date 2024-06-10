//#include <iostream>
//using namespace std;
//
////reference
//int main()
//{
//	int x = 5;
//	int& b = x;
//
//	cout << b << endl;
//	int c = b;
//
//	c = 12;
//
//	cout << c << endl;
//
//
//}


//using references to pass beyond function
#include <iostream>
using namespace std;

void work(int& x)
{
	x++;
}

int main() 
{
	int a = 5;
	work(a);
	cout << a << endl;

}