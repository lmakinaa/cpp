#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac == 1) {
        std::cout << "Usage: [./PmergeMe <n1 n2 ..>]\n";
        return 1;
    }

    try {

        for (int i = 1; i < ac; i++) {
            if (!PmergeMe::isValidNumber(av[i]))
                throw std::runtime_error("invalid argument");
        }

        std::vector<int> intVec;
        std::list<int> intList;
        bool print = true;

        std::clock_t start1 = std::clock();
        intVec.reserve(ac);
        PmergeMe::fillContainer(av, ac, intVec, print);
        PmergeMe::sort(intVec);
        PmergeMe::printContainer(std::cout, intVec, print);
        std::clock_t end1 = std::clock();

        std::clock_t start2 = std::clock();
        PmergeMe::fillContainer(av, ac, intList, print);
        PmergeMe::sort(intList);
        PmergeMe::printContainer(std::cout, intList, print);
        std::clock_t end2 = std::clock();
        
        std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector : " << (end1 - start1) / 1000.0 << "ms" << std::endl;
        std::cout << "Time to process a range of " << ac - 1 << " elements with std::list : " << (end2 - start2) / 1000.0 << "ms" << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << '\n';
        return 1;
    }


}