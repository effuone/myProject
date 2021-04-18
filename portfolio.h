#pragma once
#include <iostream>
using namespace std;

void drawRect(int width, int height)
{
	for (int i = 0; i < width; i++)
	{
		cout << "*";
	}
	cout << endl;
	for (int i = 0; i < height - 2; ++i)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0 || j == width - 2)
			{
				cout << "*";
			}
			cout << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < width; i++)
	{
		cout << "*";
	}
}

int roundDoubleArray(double* arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] - (int)arr[i] > 0.5) {
			cout << (int)arr[i] + 1 << " ";
		}
		else
		{
			cout << arr[i] - (arr[i] - (int)arr[i]) << " ";
		}
	}
	return arr[size];
}