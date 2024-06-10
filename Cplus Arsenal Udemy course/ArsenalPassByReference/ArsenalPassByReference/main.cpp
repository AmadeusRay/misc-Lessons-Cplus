#include <iostream>
using namespace std;

//void swapInts(int& p, int& q)
//{
//	int temp = p;
//	p = q;
//	q = temp;
//}
//
//int main()
//{
//	int x{ 5 }, y{ 97 };
//	cout << "x: " << x << "\ty: " << y << endl;
//	swapInts(x, y);
//	cout << "x: " << x << "\ty: " << y << endl;
//	
//	return 0;
//}

void inputScores(int &x, int &y, int &z)
{
	cout << "Enter scores for the past 3 games:";
	cin >> x >> y >> z;
}

float getAverageScore(const int& x, const int &y, const int &z)
{
	return (x + y + z) / 3.0f;
}

int main()
{
	int score1{}, score2{}, score3{};
	float averageScore{};

	inputScores(score1, score2, score3);

	averageScore = getAverageScore(score1, score2, score3);
	cout << "Your average score is:" << averageScore << endl;

	return 0;
}