#include "Cat.hpp"

Cat::Cat() // init members here
    : Animal()
{
    type = "Cat";
    std::cout << "Cat instance has been constructed.\n";
}

Cat::~Cat()
{
    std::cout << "Cat instance has been destructed.\n";
}

void Cat::makeSound() const
{
    std::cout << "MEOW MEOW NI**A\n";
}

