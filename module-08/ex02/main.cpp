#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
    {
        MutantStack<int> x;

        x.push(7);
        x.push(76);
        x.push(3);
        x.push(310);
        x.push(13);
        x.push(88);

        MutantStack<int> y = x;

        for (MutantStack<int>::iterator i = y.begin(); i != y.end(); i++) {
            std::cout << *i << '\n';
        }
    }

    std::cout << "\nReplacing MutantStack by std::list\n" << std::endl;
    
    {
        std::list<int> x;

        x.push_back(7);
        x.push_back(76);
        x.push_back(3);
        x.push_back(310);
        x.push_back(13);
        x.push_back(88);

        std::list<int> y = x;

        for (std::list<int>::iterator i = y.begin(); i != y.end(); i++) {
            std::cout << *i << '\n';
        }
    }

    return 0;
}
