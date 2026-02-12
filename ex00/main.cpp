#include "easyfind.hpp"

int main()
{
	std::list<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	try
	{
		easyfind(v, 10);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}