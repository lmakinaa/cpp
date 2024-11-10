#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac == 1) {
        std::cout << "Usage: [./PmergeMe <n1 n2 ..>]\n";
        return 1;
    }
    try {
        std::vector<int> intVec;

        intVec.reserve(ac);

        PmergeMe::parseArgs(av, ac, intVec);

        PmergeMe::sortVector(intVec);

        PmergeMe::printContainer(std::cout, intVec);
    } catch (std::exception& e) {
        std::cerr << e.what() << '\n';
        return 1;
    }


}