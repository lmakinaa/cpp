#include "Dog.hpp"

Dog::Dog()
    : AAnimal()
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
    : AAnimal()
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
    std::cout << "Dog has been copy constructed.\n";
}

Dog& Dog::operator=(const Dog& src)
{
    if (this == &src)
        return *this;
    
    *m_brain = *(src.m_brain);
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
    std::cout << "WOOF WOOF\n";    
}

void Dog::setIdea(std::string idea, int index)
{
    m_brain->setIdea(idea, index);
}

void Dog::showIdeas()
{
    m_brain->showIdeas();
}
