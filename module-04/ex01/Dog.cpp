#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    try 
    {
        m_brain = new Brain();    
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << '\n';
        std::exit(1);
    }
    std::cout << "Dog instance has been constructed.\n";
}

Dog::Dog(const Dog& src)
    : Animal()
{
    try 
    {
        m_brain = new Brain(*src.m_brain);
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << '\n'; 
        std::exit(1);
    }
    type = src.type;
    std::cout << "Dog copy construction called.\n";
}

Dog& Dog::operator=(const Dog& src)
{
    if (this == &src)
        return *this;
    delete m_brain;
    try 
    {
        m_brain = new Brain(*src.m_brain);
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << '\n'; 
        std::exit(1);
    }
    type = src.type;
    std::cout << "Dog copy assignement called.\n";
    return *this;
}

Dog::~Dog()
{
    delete m_brain;
    std::cout << "Dog instance has been destructed.\n";
}

void Dog::makeSound() const
{
    std::cout << "WOOF 7AYD MN HNA\n";    
}

