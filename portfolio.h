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