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

void Dog::makeSound() const
{
    std::cout << "WOOF 7AYD MN HNA\n";    
}

