#include "Animal.hpp"

Animal::Animal() // init members here
    : type ("????")
{
    std::cout << "Animal instance has been constructed.\n";
}

Animal::Animal(const Animal& src)
    : type (src.type)
{
    std::cout << "Animal instance has been copy constructed.\n";
}

Animal& Animal::operator=(const Animal& src)
{
    if (this == &src)
        return *this;
    type = src.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal instance has been destructed.\n";
}

const std::string& Animal::getType() const 
{
    return type;
}

void Animal::makeSound() const
{
    std::cout << "*Unknown sound*\n";
}

