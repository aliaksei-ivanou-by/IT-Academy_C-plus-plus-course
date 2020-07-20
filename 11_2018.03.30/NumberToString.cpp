#include <string>
#include <sstream>
#include <iostream>
#include "NumberToString.h"

std::string NumberToString(int n)
{
	std::ostringstream oOStrStream;
	oOStrStream<<n;
	return oOStrStream.str();
}
