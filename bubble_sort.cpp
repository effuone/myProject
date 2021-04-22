#include <iostream>
#include <random>
using namespace std;

void sorting(int* arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = i + 1; j < size; ++j)
		{
			if (arr[j] < arr[i])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	random_device random;
	const int SIZE = 10;
	int arr[SIZE];
	cout << "Origin Array: ";
	for (int i = 0; i < SIZE; ++i)
	{
		arr[i] = random() % 10;
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Sorted Array: ";
	sorting(arr, SIZE);

	system("Pause>nul");
}