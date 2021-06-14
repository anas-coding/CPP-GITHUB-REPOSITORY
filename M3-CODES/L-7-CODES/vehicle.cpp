#include "vehicle.h"
#include <string>
using namespace std;

vehicle::vehicle(const string& mylicense, const int myyear)
	:license(mylicense), year(myyear) {};

const string vehicle::getdesc() const
{
	return license + "from " + stringify(year);
};


const string& vehicle ::getLicense() const
{
	return license;
};


const int vehicle::getYear() const
{
	return year;
};