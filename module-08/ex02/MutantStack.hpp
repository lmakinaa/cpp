#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T, typename TContainer>
class MutantStack: public std::stack<T, TContainer>
{

public:
    MutantStack();
    ~MutantStack() {};
    typedef typename TContainer::iterator iterator;
    iterator begin();
    iterator end();

};


template<typename T, typename TContainer>
MutantStack<T, TContainer>::MutantStack()
    : std::stack<T, TContainer>()
{
}

template<typename T, typename TContainer>
typename MutantStack<T, TContainer>::iterator MutantStack<T, TContainer>::begin()
{
    return this->c.begin();
}

template<typename T, typename TContainer>
typename MutantStack<T, TContainer>::iterator MutantStack<T, TContainer>::end()
{
    return this->c.end();
}

#endif
