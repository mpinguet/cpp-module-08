#pragma once
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdlib.h>

class Span
{
private:
    Span();
    unsigned int maxSize;
    std::vector<int> tab;
public:
    Span(unsigned int n);
    ~Span();
    Span(const Span&);
    Span &operator=(const Span&);

    void addNumber(int i);
	void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int longestSpan() const;
    int shortestSpan() const;

    class SpanFullException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class NotEnoughNumbersException : public std::exception
    {
        virtual const char *what() const throw();
    };
};