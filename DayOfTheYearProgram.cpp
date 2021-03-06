// DayOfTheYear.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DayOfYear.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int day;
	cout << "What day of the year do you want to see? : ";
	cin >> day;

	DayOfYear translator(day);
	translator.print();

	int dayOfMonth;
	string month;

	cout << "What month do you want to store? : ";
	cin >> month;
	do {
		cout << "What day of the month do you want to store(0-31)? :";
		cin >> dayOfMonth;
		if (dayOfMonth < 0 || dayOfMonth > 31) {
			cout << "Error: Day has to be in range of 0-31";
		}
	} while (dayOfMonth < 0 || dayOfMonth > 31);

	DayOfYear translatorMod(month, dayOfMonth);
	translatorMod.print();

    return 0;
}

