// ARRAY_OF_KEYS.cpp : This file contains the 'main' Array Of Keys Of String.
//

#include <iostream>
#include<cstdlib>
using namespace std;

int ReadPostiveNumber(string msg)
{
    int number;
	do
	{
		cout << msg << endl;
		cin >> number;
	} while (number<=0);
	return number;
}
int RandomNumber(int from, int to)
{
	int RandNumber = rand() % (to - from + 1) + from;
	return RandNumber;
}

string GenrateWord()
{
	string word = "";
	for (int i = 0; i <= 4; i++)
	{
		word = word + char(RandomNumber(65, 90));
	}
	return word;
}
string Gen_Keys()
{
	string key = "";
	key = key + GenrateWord() + "-";
	key = key + GenrateWord() + "-";
	key = key + GenrateWord() + "-";
	key = key + GenrateWord();
	return key;
}

void FillArray(string arr[100], int& Lenght)
{
	for (int i = 0; i < Lenght; i++)
	{
		arr[i] = Gen_Keys();
	}
}
void PrintArray(string arr[100], int Lenght)
{
	int counter = 0;
	for (int i = 0; i < Lenght; i++)
	{
		cout << "Key[" << counter << "]=" << arr[i]<<endl;
		counter++;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	string arr[100];
	int Lenght = ReadPostiveNumber("Enter Lenght Of The Array:");
	FillArray(arr, Lenght);
	cout << "The Keys Into The Array:" << endl;
	PrintArray(arr, Lenght);
}