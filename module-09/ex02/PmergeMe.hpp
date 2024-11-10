#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <exception>


class PmergeMe
{

public:
    static void sortVector(std::vector<int>& v);
    static bool isValidNumber(std::string str);

    template<typename T>
    static void parseArgs(char **av, int ac, T& container) {
        for (int i = 1; i < ac; i++) {
            if (!isValidNumber(av[i]))
                throw std::runtime_error("invalid argument");
            container.push_back(std::atoi(av[i]));
        }
    }

    template<typename T>
    static std::ostream& printContainer(std::ostream &out, T &val) { 
        typename T::iterator it;
        for (it = val.begin(); it != val.end(); it++)
            out << *it << " ";

        out << std::endl;
        return (out);
    }

private:
    PmergeMe();
    PmergeMe(const PmergeMe&);
    PmergeMe& operator=(const PmergeMe&);
    ~PmergeMe();

};

#endif
