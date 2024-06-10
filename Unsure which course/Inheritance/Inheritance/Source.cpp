#include <iostream>
#include <string>
using namespace std;
/*
class Animal
{
public:
	Animal();
	Animal(string name, int age, int num_limbs);

	string Name;
	int Age;
	int NumberOfLimbs;

	void Report();
};

class Dog : public Animal
{
public:                     // needed to access public Animal.
	Dog();
	Dog(string name, int age, int num_limbs);

	void Speak();
};

class Corgi :public Dog
{

};

int main()
{
	Corgi corgi;
	corgi.Speak();
	corgi.Report();

	system("pause");
}

Animal::Animal()
{
	cout << "An ANIMAL is born! \n";

	Name = "DEFAULT";
	Age = 2;
	NumberOfLimbs = 4;
}

Animal::Animal(string name, int age, int num_limbs): Name(name), Age(age), NumberOfLimbs(num_limbs)
{
	Report();
}

void Animal::Report()
{
	cout << endl;
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "Number Of Limbs: " << NumberOfLimbs << endl;
}

Dog::Dog()
{
	cout << "A DOG is born! \n";
}

Dog::Dog(string name, int age, int num_limbs) : Animal(name, age, num_limbs)
{
	
}

void Dog::Speak()
{
	cout << "woof\n";
} */

// messing with inheritance lesson in this. Above is original from lesso.

class Animal
{
public:
	Animal();
	Animal(string name, int age, int num_limbs);

	string Name;
	int Age;
	int NumberOfLimbs;

	void Report();
};

class Dog : public Animal
{
public:                     // needed to access public Animal.
	Dog();
	void Speak();
};

class Corgi :public Dog
{
public:
	Corgi(); // needed to access public Dog.

};

int main()
{
	Corgi corgi;
	corgi.Speak();
	corgi.Report();

	system("pause");
}

Animal::Animal()
{
	cout << "An ANIMAL is born! \n";

	NumberOfLimbs = 4;
}

Animal::Animal(string name, int age, int num_limbs) : Name(name), Age(age), NumberOfLimbs(num_limbs)
{
	Report();
}

void Animal::Report()
{
	cout << endl;
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "Number Of Limbs: " << NumberOfLimbs << endl;
}

Dog::Dog()
{ 
	cout << "A DOG is born! \n";
}

void Dog::Speak()
{
	cout << "woof\n";
}

Corgi::Corgi()
{
	Name = "Spot";
	Age = 5;
}
