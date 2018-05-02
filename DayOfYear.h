#pragma once
#include <string>
using namespace std;

class DayOfYear {
private:
	string month;
	int dayOfMonth, dayOfYear;
public:
	DayOfYear(string, int);
	DayOfYear(int);
	void print();
};
