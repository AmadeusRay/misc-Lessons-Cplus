#include <iostream>
using namespace std;

/*
int boostHealth(int currentHealth, int HealthBoost = 15)
{
	return (currentHealth + HealthBoost);
}

int main()
{
	int Health = 25;
	
	cout << "Current Health is : " << Health << endl;
	cout << "Health is boosted. Now at :" << boostHealth(Health, 25) << endl;

	return 0;


} */



/*

int boostPoints(int currentPoints, int pointBoost = 15, bool bMultiply = false, int multiplier = 2)
{
	if (bMultiply) //defaults to true withouth "= true"
	{
		return (currentPoints + pointBoost * multiplier);
	}
	else
	{
		return (currentPoints + pointBoost);
	}
}

int main()
{
	int points = 25;

	cout << "Current Health is : " << points << endl;
	cout << "Poinst is boosted. Now at :" << boostPoints(points, 25, true, 4) << endl;

	return 0;


}
*/

int boostPoints(int x, float y); // noticed numbers not put in. Used type then variable name.

int main()
{
	int points = 25;

	cout << "Boosted Points:" << boostPoints(5, 15.f) << endl;

	return 0;
}

int boostPoints(int x, float y) 
// Will work without X but good practice to include none used variable name.

{
	return y;
}