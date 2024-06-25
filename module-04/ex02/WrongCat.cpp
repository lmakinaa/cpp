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

void WrongCat::makeSound() const
{
    std::cout << "WRONG MEOW MEOW NI**A\n";
}

