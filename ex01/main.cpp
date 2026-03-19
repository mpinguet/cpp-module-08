#include "Span.hpp"

int main()
{

	// test with 5 numbers (from subject)
	Span sp = Span(5);
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	// test with 15000 numbers
	Span sp2 = Span(1500);
	try
	{
		std::vector<int> vec;
		for (int i = 0; i < 1500; i++)
			vec.push_back(i);
		sp2.addRange(vec.begin(), vec.end());
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
