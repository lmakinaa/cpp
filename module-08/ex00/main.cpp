#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main()
{
    int initX[] = {-1,1,2,3,4,5,6,7};
    std::vector<int> x (initX, initX + 8);
    std::vector<int>::iterator i;
    try {
        i = easyfind(x, 5);
    }
    catch (std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
        return 1;
    }
    
    std::cout << *(x.end() - 1) << std::endl;
    return 0;
}