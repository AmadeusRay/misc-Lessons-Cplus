////static int var = 5;
//
//int var = 5; // extern makes this available for main.cpp, becomes in global space.
//// bad to do, can cause conflicts when other var is made.

#include <iostream>

static int s_Var = 5; // static makes it available in the file scope.

void demoFunction()
{
	std::cout << "hello" << std::endl;
}