#pragma once

#include <algorithm>
#include <iterator>
#include <exception>
#include <list>
#include <vector>
#include <iostream>

class NotFounds : public std::exception
{
public:
	virtual const char	*what(void) const throw();
};

const char *NotFounds::what() const throw()
{
	return ("occurrence not found");
}


template <typename T>
void easyfind(T t, int i)
{
	typename T::iterator it;

	it = std::find(t.begin(), t.end(), i);
	if (it != t.end())
		 std::cout << "occurrence " << i << " finds" << std::endl;
	else
		throw NotFounds();
}