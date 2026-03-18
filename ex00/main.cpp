#include "easyfind.hpp"

int main()
{
	std::list<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	std::cout << "Test1" << std::endl;
	try
	{
		easyfind(v, 10);
		easyfind(v, 11);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	std::cout << "Test2:" << std::endl;
	std::vector<int> v2;
	try
	{
		easyfind(v2, 10);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}