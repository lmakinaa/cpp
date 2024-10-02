#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>

typedef std::vector<int>::iterator t_it;

class Span
{

public:
    Span(unsigned int N);

    unsigned int shortestSpan();
    unsigned int longestSpan();

    void addNumber(int n);
    void addNumberRange(t_it start, t_it end);
    void addNumberRange(int *start, int *end);
    void addNumberRange(int start, int end);
    void addRandomNumberRange(unsigned int size);

    void displayNumbers();
    void setSize(unsigned int n);

    Span();
    Span(const Span& src);
    ~Span();
    Span& operator=(const Span& src);

private:
    unsigned int m_size;
    std::vector<int> m_array;

};

#endif
