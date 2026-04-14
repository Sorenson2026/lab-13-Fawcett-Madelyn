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
void bubbleSort(vector<int>& arr);
void fillVector(vector<int>& arr);


//main function to fill a vector and sort it using a bubble sort **********************
int main()
{

	vector<int> arr(25);

	cout << "This program uses a Bubble Sort on a Vector of Integers \n";
	cout << endl;
	fillVector(arr);
	bubbleSort(arr);



	return 0;
}

//bubble sort function ***************
void bubbleSort(vector<int>& arr)
{
	int n = arr.size();
	bool swapped;

	for (int pass = 0; pass < n - 1; pass++)
	{
		cout << "Pass # " << pass + 1;
		swapped = false;
		for (int i = 0; i < n - pass - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				swapped = true;
			}

		}
		for (int num : arr)
		{
			cout << setw(3) << num;
		}
		cout << endl;
	}


}

//fill vector function **************
void fillVector(vector<int>& arr)
{
	cout << "Original:";
	for (int i = 0; i < 25; ++i)
	{
		arr[i] = rand() % 100;
	}
	for (auto i : arr)
	{
		cout << setw(3) << i;
	}
	cout << endl;
}

