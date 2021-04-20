#pragma once
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

void myTimeStamp()
{	//012345678901234567
	//wwwmmmddhhmmssyyyy
	//	<0-3		www		char* www[] = myTimeStamp[i];
	//	<4-6		mmm		char* mmm[] = myTimeStamp[i];
	//	<7-8		dd		int dd[] = myTimeStamp[i];
	//	<9-10		hh		int hh[] = myTimeStamp[i];
	//	<11-12		mm		int mm[] = myTimeStamp[i];
	//	<13-14		ss		int ss[] = myTimeStamp[i];
	//	<15-18		yyyy	int yyyy[] = myTimeStamp[i];
	char mytime[] = __TIMESTAMP__;
	char www[3];
	char* mmm[3];
	int dd[2];
	int hh[2];
	int mm[2];
	int ss[2];
	int yyyy[4];

	string stringTimeStamp = compactString(__TIMESTAMP__);
	int SIZE = size(stringTimeStamp);
	char* myTimeStamp = new char[SIZE];


	for (int i = 0; i < SIZE; ++i) // loop for initializing char array of myTimeStamp
	{
		myTimeStamp[i] = stringTimeStamp[i];
		cout << myTimeStamp[i];
	}


	delete[] myTimeStamp;
	system("Pause>nul");
}