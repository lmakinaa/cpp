#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <deque>

class PmergeMe
{

public:
    static void sortVector(std::vector<int> v);

private:
    PmergeMe();
    PmergeMe::PmergeMe(const PmergeMe&);
    PmergeMe& PmergeMe::operator=(const PmergeMe&);
    PmergeMe::~PmergeMe();

};

#endif
