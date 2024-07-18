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

Cat::Cat(const Cat& src)
    : Animal()
{
    *this = src;
    std::cout << "Cat instance has been copy constructed.\n";
}

Cat& Cat::operator=(const Cat& src)
{
    if (this == &src)
        return *this;
    type = src.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "MEOW MEOW NI**A\n";
}

