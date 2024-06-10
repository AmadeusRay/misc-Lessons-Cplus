#include <iostream>
#include <string>
using namespace std;

enum PlayerStatus
{
	PS_Crouched = 1,
	PS_Standing = 20,
	PS_Walking = 14,
	PS_Running = 30
};

enum MovementStatus
{
	MS_Crouched, 
	MS_Running
};

int main()
{
		PlayerStatus status;
		status = PS_Crouched;

		if (status == PS_Crouched)
		{
			cout << "player is crouched! \n";
		}

		status = PS_Running;

		if (status == PS_Running)
		{
			cout << "player is running! \n";
		}


	system("pause");
}