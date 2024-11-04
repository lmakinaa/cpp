#include "RPN.hpp"

int main(int ac, char* av[])
{
    if (ac != 2) {
        std::cerr << "Usage: ./RPN <expression>" << std::endl;
        return 1;
    }

    try {
        std::cout << RPN::evaluate(av[1]) << '\n';
    } catch(std::exception& e) {
        DEBUG && std::cerr << e.what() << std::endl;
        !DEBUG && std::cerr << "Error\n";
        return 1;
    }

    return 0;
}