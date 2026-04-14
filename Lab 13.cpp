//program to fill a vector and sort it
//Madelyn Fawcett
//April 14, 2026

#include <iostream>
#include <random>
#include <ctime>
#include <vector>
#include <iomanip>
using namespace std;

//function prototypes ********************
void bubbleSort(vector<int>& vec);
void fillVector(vector<int>& vec);


//main function to fill a vector and sort it using a bubble sort **********************
int main()
{

	vector<int> vec(25);

	cout << "This program uses a Bubble Sort on a Vector of Integers \n";
	cout << endl;

	fillVector(vec);
	bubbleSort(vec);



	return 0;
}

//bubble sort function ***************
void bubbleSort(vector<int>& vec)
{
	int n = vec.size();

	for (int pass = 0; pass < n - 1; pass++)
	{
		cout << "Pass # " << pass + 1;
		for (int i = 0; i < n - pass - 1; i++)
		{
			if (vec[i] > vec[i + 1])
			{
				swap(vec[i], vec[i + 1]);
			}

		}
		for (int num : vec)
		{
			cout << setw(3) << num;
		}
		cout << endl;
	}


}

//fill vector function **************
void fillVector(vector<int>& vec)
{
	cout << "Original:";
	for (int i = 0; i < 25; ++i)
	{
		vec[i] = rand() % 100;
	}
	for (auto i : vec)
	{
		cout << setw(3) << i;
	}
	cout << endl;
}

