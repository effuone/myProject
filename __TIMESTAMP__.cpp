#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string compactString(const char* arr)
{

	string dst = arr;
	dst.erase(remove(dst.begin(), dst.end(), ':'), dst.end()); //remove space from string
	dst.erase(remove(dst.begin(), dst.end(), ' '), dst.end()); //remove space from string

	/*cout << dst;*/
	return dst;
}

int main()
{	//012345678901234567
	//wwwmmmddhhmmssyyyy
	//	<0-3		www		char* www[] = myTimeStamp[i];
	//	<4-6		mmm		char* mmm[] = myTimeStamp[i];
	//	<7-8		dd		int dd[] = myTimeStamp[i];
	//	<9-10		hh		int hh[] = myTimeStamp[i];
	//	<11-12		mm		int mm[] = myTimeStamp[i];
	//	<13-14		ss		int ss[] = myTimeStamp[i];
	//	<15-18		yyyy	int yyyy[] = myTimeStamp[i];


	string stringTimeStamp = compactString(__TIMESTAMP__);
	int SIZE = size(stringTimeStamp);
	char* myTimeStamp = new char[SIZE];
	char* www = new char[SIZE];
	char* mmm = new char[SIZE];
	int* dd = new int[SIZE];
	int* hh = new int[SIZE];
	int* mm = new int[SIZE];
	int* ss = new int[SIZE];
	int* yyyy = new int[SIZE];


	for (int i = 0; i < SIZE; ++i) // loop for initializing char array of myTimeStamp
	{
		myTimeStamp[i] = stringTimeStamp[i];
		cout << myTimeStamp[i];
	}
	cout << endl;
	for (int i = 0; i < 3; ++i)
	{
		www[i] = myTimeStamp[i];
		cout << www[i];
	}
	cout << endl;
	for (int i = 3; i < 6; ++i)
	{
		mmm[i] = myTimeStamp[i];
		cout << mmm[i];
	}
	cout << endl;
	cout << endl;
	delete[] myTimeStamp;
	system("Pause>nul");
}