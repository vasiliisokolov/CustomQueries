﻿#include "CustomQueries.h"
#include <cpr/cpr.h>

int main()
{
	cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/get"));
	std::cout << r.text << std::endl;
}
