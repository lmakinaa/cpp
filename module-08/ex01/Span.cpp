#include "Span.hpp"

Span::Span(unsigned int N)
    : m_size (N) // init members her
{
    m_array.reserve(m_size);
}


// Adding numbers
void Span::addNumber(int n)
{
    if (m_array.size() + 1 > m_size)
        throw std::runtime_error("The span has reached its maximum size");
    m_array.push_back(n);
}

void Span::addNumberRange(t_it start, t_it end)
{
    if (m_array.size() + (end - start) > m_size)
        throw std::runtime_error("The span has reached its maximum size");
    m_array.insert(m_array.end(), start, end);
}

void Span::addNumberRange(int *start, int *end)
{
    if (!start || !end)
        return ;
    if (m_array.size() + (end - start) > m_size)
        throw std::runtime_error("The span has reached its maximum size");
    m_array.insert(m_array.end(), start, end);
}

/*
* End is not included
*/ 
void Span::addNumberRange(int start, int end)
{
    if (m_array.size() + (end - start) > m_size)
        throw std::runtime_error("The span has reached its maximum size");
    for (;start < end; start++)
        m_array.push_back(start);
}

void Span::addRandomNumberRange(unsigned int size)
{
    if (m_array.size() + size > m_size)
        throw std::runtime_error("The span has reached its maximum size");

    int random = std::rand();

    for (unsigned int i = 1; i < size + 1; i++) {
        random = (random - std::rand()) + size - (size / i);
        m_array.push_back(random);
    }
}

// Utilities functions
void Span::displayNumbers()
{
        std::sort(m_array.begin(), m_array.end());
    for (size_t i = 0; i < m_array.size(); i++) {
        std::cout << '[' << i << ']' << ": " << static_cast<long>(m_array[i]) << '\n';
    }
}

void Span::setSize(unsigned int n)
{
    m_size = n;
}


// Finding spans
unsigned int Span::shortestSpan()
{
    if (m_array.size() < 2)
        throw std::runtime_error("No span can be found");
    if (m_array.size() == 2)
        return (std::abs(m_array[0] - m_array[1]));
    std::sort(m_array.begin(), m_array.end());
    std::vector<unsigned int> distances;

    for (t_it it = m_array.begin(); it != m_array.end() - 1; it++) {
        distances.push_back(std::abs(*it - *(it + 1)));
    }
    return *std::min_element(distances.begin(), distances.end());
}

unsigned int Span::longestSpan()
{
    if (m_array.size() < 2)
        throw std::runtime_error("No span can be found");
    if (m_array.size() == 2)
        return (std::abs(m_array[0] - m_array[1]));

    t_it itBeg = m_array.begin();
    t_it itEnd = m_array.end();

    return (*std::max_element(itBeg, itEnd) - *std::min_element(itBeg, itEnd));
}


// Canonical form
Span::Span()
    : m_size (0)
{
}

Span::Span(const Span& src)
{
    *this = src;
}

Span& Span::operator=(const Span& src)
{
    if (this == &src)
        return *this;
    
    m_size = src.m_size;
    m_array = src.m_array;
    
    return *this;
}

Span::~Span()
{
}
