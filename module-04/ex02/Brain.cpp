#include "Brain.hpp"

Brain::Brain() 
{
}

Brain::Brain(const Brain& src)
{
    *this = src;
}

Brain& Brain::operator=(const Brain& src)
{
    if (this == &src)
        return *this;
    for (int i = 0; i < 100; i++)
    {
        m_ideas[i] = src.m_ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
}

