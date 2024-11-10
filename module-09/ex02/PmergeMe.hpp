#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <exception>
#include <ctime>
#include <iomanip>

class PmergeMe
{

public:
    static void sort(std::vector<int>& v);
    static void sort(std::list<int>& v);
    static bool isValidNumber(std::string str);

    template<typename T>
    static void fillContainer(char **av, int ac, T& container, bool& print) {

        print && std::cout << "Before: ";
        for (int i = 1; i < ac; i++) {
            int n = std::atoi(av[i]);
            container.push_back(n);
            print && std::cout << n << " ";
        }
        print && std::cout << std::endl;

        // print = false;
    }

    template<typename T>
    static std::ostream& printContainer(std::ostream &out, T &val, bool& print) { 
        typename T::iterator it;

        print && out << "After: ";
        for (it = val.begin(); it != val.end(); it++)
            print && out << *it << " ";

        print && out << std::endl;
        print = false;
        return (out);
    }

private:
    PmergeMe();
    PmergeMe(const PmergeMe&);
    PmergeMe& operator=(const PmergeMe&);
    ~PmergeMe();

};

#endif
