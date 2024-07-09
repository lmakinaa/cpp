#include "AAnimal.hpp"

AAnimal::AAnimal() // init members here
    : type ("????")
{
    std::cout << "AAnimal instance has been constructed.\n";
}

AAnimal::AAnimal(const AAnimal& src)
    : type (src.type)
{
    std::cout << "AAnimal instance has been copy constructed.\n";
}

AAnimal& AAnimal::operator=(const AAnimal& src)
{
    if (this == &src)
        return *this;
    type = src.type;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal instance has been destructed.\n";
}

const std::string& AAnimal::getType() const 
{
    return type;
}

