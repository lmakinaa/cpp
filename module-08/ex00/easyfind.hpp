#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template<typename T>
typename T::iterator easyfind(T& intContainer, int n)
{
    typename T::iterator i = std::find(intContainer.begin(), intContainer.end(), n);
    if (i == intContainer.end())
        throw std::out_of_range("The element is not found within the container");
    return i;
}

#endif
