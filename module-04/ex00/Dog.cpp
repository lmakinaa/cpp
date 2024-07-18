#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog instance has been constructed.\n";
}

Dog::~Dog()
{
    std::cout << "Dog instance has been destructed.\n";
}

Dog::Dog(const Dog& src)
    : Animal()
{
    *this = src;
    std::cout << "Dog instance has been copy constructed.\n";
}

Dog& Dog::operator=(const Dog& src)
{
    if (this == &src)
        return *this;
    type = src.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "WOOF WOOF\n";    
}

