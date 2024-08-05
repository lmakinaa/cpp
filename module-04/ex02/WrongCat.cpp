#include "WrongCat.hpp"

WrongCat::WrongCat() // init members here
    : WrongAnimal()
{
    type = "WrongCat";
    std::cout << "WrongCat instance has been constructed.\n";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat instance has been destructed.\n";
}

WrongCat::WrongCat(const WrongCat& src)
    : WrongAnimal()
{
    *this = src;
    std::cout << "WrongCat instance has been copy constructed.\n";
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
    if (this == &src)
        return *this;
    type = src.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WRONG MEOW MEOW NI**A\n";
}

