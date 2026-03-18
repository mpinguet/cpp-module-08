#include "Span.hpp"

int main()
{

	// test with 5 numbers (from subject)
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	// test with 15000 numbers
	Span sp2 = Span(15000);
	std::vector<int> vec;
	for (int i = 0; i < 15000; i++)
		vec.push_back(i);
	sp2.addRange(vec.begin(), vec.end());
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	return (0);
}
