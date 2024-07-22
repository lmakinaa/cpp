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
    //std::cout << "assign operator of Brain\n";
    return *this;
}

Brain::~Brain()
{
}

void Brain::setIdea(std::string idea, int index)
{
    m_ideas[index] = idea;
}

void Brain::showIdeas()
{
    for (int i = 0; i < 100; i++)
        if (!m_ideas[i].empty())
            std::cout << m_ideas[i] << "\n";
}

