#include "Span.hpp"

Span::Span(unsigned int n) : maxSize(n) {}

Span::~Span() {}

Span::Span(const Span& cpy) : maxSize(cpy.maxSize), tab(cpy.tab) {}

Span &Span::operator=(const Span& cpy)
{
    if (this != &cpy)
    {
        this->maxSize = cpy.maxSize;
        this->tab = cpy.tab;
    }
    return *this;
}

void Span::addNumber(int i)
{
    if (tab.size() + 1 <= maxSize)
        this->tab.push_back(i);
    else
        throw SpanFullException();
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (size_t i = 0; begin != end; i++)
	{
		addNumber(*begin);
		++begin;
	}
}

int Span::longestSpan() const
{
    std::vector<int>::const_iterator max_it;
    std::vector<int>::const_iterator min_it;

    if (this->tab.size() <= 1)
        throw NotEnoughNumbersException();

    max_it = std::max_element(tab.begin(), tab.end());
    min_it = std::min_element(tab.begin(), tab.end());

    int max = *max_it - *min_it;
    return max;
}

int Span::shortestSpan() const
{
    int min;

    if (this->tab.size() <= 1)
        throw NotEnoughNumbersException();
    std::vector<int> cpy = this->tab;
    std::sort(cpy.begin(), cpy.end());

    std::vector<int>::iterator it = cpy.begin();
    std::vector<int>::iterator next = it;
    ++next;
    while (next != cpy.end())
    {
        if (it == cpy.begin())
            min = *next - *it;
        else if (*next - *it < min)
            min = *next - *it;
        ++it;
        ++next;
    }
    return (min);       
}

const char *Span::SpanFullException::what() const throw()
{
    return ("Maximum table size reached");
}

const char *Span::NotEnoughNumbersException::what() const throw()
{
    return ("You do not have enough items (minimum two)");
}

