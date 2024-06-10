//#include <iostream>
//using namespace std;
//
//void printScore(int score)
//{
//	cout << "The score is:" << score << endl;
//}
//
//int main()
//{
//	int scores[]{ 15, 6, 18, 22 };
//
//	printScore(scores[3]);
//
//	return 0;
//}

//
////Arrays as Function Arguments
//
//#include <iostream>
//using namespace std;
//
//const int SIZE = 4;
//
//void inputScores(int scoresP[])
//{
//	cout << "Enter" << SIZE << " scores: ";
//	for (int i = 0; i < SIZE; i++)
//	{
//		cin >> scoresP[i];
//	}
//}
//
//void printScores(const int scoresP[])
//{
//	cout << "\n--- --- ---" << endl;
//	cout << "The scores are: ";
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << scoresP[i] << "\t";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int scores[SIZE];
//
//	inputScores(scores);
//	printScores(scores);
//
//	return 0;
//}


////Arrays as Function Arguments with pointer?
//
//#include <iostream>
//using namespace std;
//
//const int SIZE = 3;
//
//void inputScores(int scoresP[])
//{
//	cout << "Enter" << SIZE << " scores: ";
//	for (int i = 0; i < SIZE; i++)
//	{
//		cin >> scoresP[i];
//	}
//}
//
//void printScores(const int* scoresP)
//{
//	cout << "\n--- --- ---" << endl;
//	cout << "The scores are: ";
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << *scoresP++ << "\t";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int scores[SIZE];
//
//	inputScores(scores);
//	printScores(scores);
//
//	return 0;
//}

////Arrays as Function Arguments with pointer?
//
//#include <iostream>
//using namespace std;
//
//const int SIZE = 3;
//
//void inputScores(int scoresP[])
//{
//	cout << "Enter" << SIZE << " scores: ";
//	for (int i = 0; i < SIZE; i++)
//	{
//		cin >> scoresP[i];
//	}
//}
//
//void printScores(const int* scoresP)
//{
//	cout << "\n--- --- ---" << endl;
//	cout << "The scores are: ";
//	for (int i = 0; i < SIZE; i++)
//	{
//		cout << scoresP[i] << "\t";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	int scores[SIZE];
//
//	inputScores(scores);
//	printScores(scores);
//
//	return 0;
//}

//Arrays as Function Arguments with pointer?

#include <iostream>
using namespace std;

void inputScores(int scoresP[], int size)
{
	cout << "Enter " << size << " scores: ";
	for (int i = 0; i < size; i++)
	{
		cin >> scoresP[i];
	}
}

void printScores(const int scoresP[], int size)
{
	cout << "\n--- --- ---" << endl;
	cout << "The scores are: ";
	for (int i = 0; i < size; i++)
	{
		cout << scoresP[i] << "\t";
	}
	cout << endl;
}

int main()
{
	const  int ARRAY_SIZE_1 = 3;
	int scores1[ARRAY_SIZE_1];

	inputScores(scores1, ARRAY_SIZE_1);
	printScores(scores1, ARRAY_SIZE_1);

	const  int ARRAY_SIZE_2 = 5;
	int scores2[ARRAY_SIZE_2]{2,3,4};

	printScores(scores2, ARRAY_SIZE_2);

	cout << endl;
	return 0;
}