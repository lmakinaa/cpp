#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() // init members here
    : type ("????????")
{
    std::cout << "WrongAnimal instance has been constructed.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
    : type (src.type)
{
    std::cout << "WrongAnimal instance has been copy constructed.\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
    if (this == &src)
        return *this;
    type = src.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal instance has been destructed.\n";
}

const std::string& WrongAnimal::getType() const 
{
    return type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "*Unknown wrong sound*\n";
}

