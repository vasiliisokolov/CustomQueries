#include "CustomQueries.h"
#include <cpr/cpr.h>

class UserInterface
{
public:

	void getCPR()
	{
		cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/get"));
		std::cout << r.text << std::endl;
	}

	void postCPR()
	{

	}

	void putCPR()
	{

	}

	void delCPR()
	{

	}
};

int main()
{
	cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/get"));
	std::cout << r.text << std::endl;
}
