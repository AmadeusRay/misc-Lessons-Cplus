//#include <iostream>
//using namespace std;
//
//struct Vector2D
//{
//	float x{};
//	float y{};
//
//	Vector2D operator-()
//	{
//		Vector2D temp;
//		temp.x = -x;
//		temp.y = -y;
//
//		return temp;
//	}
//
//};
//
//int main()
//{
//	Vector2D vec1, vec2{ 15.0f, 5.0f };
//
//	vec1 = -vec2;
//
//	cout << vec1.y << endl;
//	cout << vec2.y << endl;
//	
//
//	cout << endl;
//
//	return 0;
//}



// out side of scope / body version
#include <iostream>
using namespace std;

struct Vector2D
{
	float x{};
	float y{};

	Vector2D operator-() const; // keep const in mind. Good idea to keep using it?
};

Vector2D Vector2D::operator-() const
{
	Vector2D temp;
	temp.x = -x;
	temp.y = -y;

	return temp;
}

int main()
{
	Vector2D vec1, vec2{ 15.0f, 5.0f };

	vec1 = -vec2;

	cout << vec1.y << endl;
	cout << vec2.y << endl;


	cout << endl;

	return 0;
}