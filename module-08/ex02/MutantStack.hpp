#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template<typename T, typename TContainer = std::deque<T> >
class MutantStack: public std::stack<T, TContainer>
{

public:
    typedef typename TContainer::iterator iterator;
    MutantStack();
    MutantStack(const MutantStack& src);
    MutantStack& operator=(const MutantStack& src);
    ~MutantStack() {};
    iterator begin();
    iterator end();

};


template<typename T, typename TContainer>
MutantStack<T, TContainer>::MutantStack()
    : std::stack<T, TContainer>()
{
}

template<typename T, typename TContainer>
MutantStack<T, TContainer>::MutantStack(const MutantStack& src)
    : std::stack<T, TContainer>(src)
{
}

template<typename T, typename TContainer>
MutantStack<T, TContainer>& MutantStack<T, TContainer>::operator=(const MutantStack& src)
{
    if (this == &src)
        return *this;
    *this = src;
    return *this;
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
