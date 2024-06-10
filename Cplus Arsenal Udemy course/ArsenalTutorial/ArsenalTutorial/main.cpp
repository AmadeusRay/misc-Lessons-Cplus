#include <iostream>
using namespace std;

int getMonthlyRent()
{
	cout << "Rent is due!" << endl;

	return 1300.0f;
}

int main()
{

	const int MONTHS_IN_YEAR = 12;
	float monthlySalary = 0.0f;
	float yearlySalary = 0.f;

	float monthlyRent = 1000.0f;


	float groceryBudget = 300.0f;

	float monthlyBonus = 500.0f;

	if (getMonthlyRent())
	{
	cout << "Enter your monthly salary: $" << endl;
	cin >> monthlySalary;
	}


	yearlySalary = monthlySalary * MONTHS_IN_YEAR;

	cout << "Your yearly salary is:" << yearlySalary << endl;
	//if (monthlySalary > monthlyRent)
	{
		cout << "You have enough to pay rent." << endl;
	}
	if (monthlySalary <= monthlyRent)
	{
		cout << "You don't have nough to pay rent." << endl;
		cout << "You need $" << monthlyRent - monthlySalary << " more to pay rent" << endl;
	}
	if ((monthlyRent + groceryBudget) > monthlySalary && (monthlySalary > monthlyRent))
	{
		cout << "You need to keep and eye on your grocery budget and you'll be fine." << endl;
	}
}
