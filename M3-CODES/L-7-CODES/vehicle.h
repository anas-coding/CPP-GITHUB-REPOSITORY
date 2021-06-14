#pragma once
#include <string>
using namespace std;
class vehicle
{
protected:
	string license;
	int year;
public:
	//void vehicle(const string& mylicense, const int myyear);
	vehicle(const string& mylicense, const int myyear);
	const string getdesc() const;
	const string  &getLicense() const;
	const int getYear() const;
};

