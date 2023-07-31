#include "CustomQueries.h"
#include <cpr/cpr.h>

class UserInterface
{
	cpr::Response r;

public:

	void getCPR()
	{
		std::cout << "Get!" << std::endl;

		r = cpr::Get(cpr::Url{"http://httpbin.org/get"});
		
	}

	void postCPR()
	{
		std::cout << "Post!" << std::endl;
		r = cpr::Post(cpr::Url{"http://httpbin.org/post"}, cpr::Payload{{"adress", "square"}});
	}

	void putCPR()
	{
		std::cout << "Put!" << std::endl;
		r = cpr::Put(cpr::Url{"http://httpbin.org/put"}, cpr::Payload{{"adress", "squareA"}});
	}

	void delCPR()
	{
		std::cout << "Delete!" << std::endl;
		r = cpr::Delete(cpr::Url{"http://httpbin.org/get"});
	}
	
	void patchCPR()
	{
		std::cout << "Patch!" << std::endl;
		r = cpr::Patch(cpr::Url{"http://httpbin.org/patch"}, cpr::Payload{{"adress", "squareB"}});
	}

	void out()
	{
		std::cout << r.text << std::endl;
	}

	void run(int operation)
	{
		if (operation > 5) operation = 5;
		else if (operation < 1) operation = 1;

		switch (operation)
		{
		case 1:
			getCPR();
			out();
			break;
		case 2:
			postCPR();
			out();
			break;
		case 3:
			putCPR();
			out();
			break;
		case 4:
			delCPR();
			break;
		case 5:
			patchCPR();
			out();
			break;
		}
	}
};

int main()
{
	UserInterface inter;
	int operation;
	while (true)
	{
		std::cout << "Choose the operation: ";
		std::cin >> operation;

		if (operation == 0) return 0;
		else
		{
			inter.run(operation);
		}
	}
}
