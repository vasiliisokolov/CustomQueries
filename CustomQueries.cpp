#include "CustomQueries.h"
#include <cpr/cpr.h>

class UserInterface
{
	cpr::Response r;

public:

	void getCPR()
	{
		r = cpr::Get(cpr::Url("http://httpbin.org/get"));
		
	}

	void postCPR()
	{
		r = cpr::Post(cpr::Url("http://httpbin.org/post"));
	}

	void putCPR()
	{
		r = cpr::Put(cpr::Url("http://httpbin.org/put"));
	}

	void delCPR()
	{
		r = cpr::Delete(cpr::Url("http://httpbin.org/delete"));
	}
	
	void patchCPR()
	{
		r = cpr::Patch(cpr::Url("http://httpbin.org/patch"));
	}

	void out()
	{
		std::cout << r.text << std::endl;
	}
};

int main()
{
	cpr::Response r = cpr::Get(cpr::Url("http://httpbin.org/get"));
	std::cout << r.text << std::endl;
}
