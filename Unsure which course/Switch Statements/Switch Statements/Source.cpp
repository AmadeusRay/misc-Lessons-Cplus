/* 
* This is with else ifs to show diffence between this and Switch statements. This method had to do 2 checks to goto the third option. When you have MANY options to check like a thousand enums and floats. It will be taxing. 
#include <iostream>
#include <string>
using namespace std;

enum PlayerStatus 
{
	PS_Running,
	PS_Walking,
	PS_Crouching
};

const float RunSpeed = 800.f;
const float WalkSpeed = 500.f;
const float CrouchSpeed = 350.f;
//PlayerStatus status = PS_Walking; <-- don't want globally, using other method
void UpdateMovementSpeed(PlayerStatus P_Status, float& speed);  //instead of putting PlayerStatus status = PS_Walking; globally
// ^float& speed 

int main()
{
	float MovementSpeed;
	//^ not global, so we have to add earlier and later float& speed and be able to change value
	//PlayerStatus status = PS_Walking; won't work here since this is too local.

	PlayerStatus status = PS_Walking; // cance change to PS_Running, PS_Crouching for different variables
	UpdateMovementSpeed(status, MovementSpeed);
	
	cout << "MovementSpeed = " << MovementSpeed << endl;
	system("pause");
}

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed) // <-- added in instead of PlayerStatus status = PS_Walking; globally
{
	if (P_Status == PS_Running)  // <--- P_Status since we don't hwant PlayerStatus status = PS_Walking; globally
	{
		speed = RunSpeed;
	}
	else if (P_Status == PS_Walking)
	{
		speed = WalkSpeed;
	}
	else if (P_Status == PS_Crouching)
	{
		speed = CrouchSpeed;
	}
}

*/


// Using Switch to be more efficient
// enums are good to use because they are description

#include <iostream>
#include <string>
using namespace std;

void SwitchOnInt(int i);

int main()
{
	int integer = 9392;

	SwitchOnInt(integer); 

	system("pause");
}

void SwitchOnInt(int i) // checking if case (0, 1, or 2) match with i (whatever number was set for 'int interger =' )
// i is used because of 'switch (i). 
{
	switch (i)
	{
	case 0:
		cout << "Your number was zero. \n";
		break;
	case 1:
		cout << "Your number was one. \n";
		break;
	case 2:
		cout << "Your number was two. \n";
		break;
	default:
		cout << "Your number was not 0, 1, or 2. \n";
	}
}