#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <cctype>

template<typename TArr, typename TLen, typename T>
void iter(TArr target[], TLen length, T (*f)(TArr&))
{
	if (length <= 0 || !target || !f)
		return ;
	for (int i = 0; i < length; i++) {
		f(target[i]);
	}
}

// A template function for test
template<typename T>
void ft_print(T target)
{
	std::cout << target << std::endl;
}

#endif