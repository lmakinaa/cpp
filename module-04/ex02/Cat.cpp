#include "Cat.hpp"

Cat::Cat() // init members here
    : AAnimal()
{
    type = "Cat";
    try 
    {
        m_brain = new Brain();
    }
    catch (const std::exception& e)
    {
        std::cerr << "Exception caught: " << e.what() << '\n';
        std::exit(1);
    }
    std::cout << "Cat instance has been constructed.\n";
}

Cat::Cat(const Cat& src)
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
    std::cout << "Cat has been copy constructed.\n";
}

Cat& Cat::operator=(const Cat& src)
{
    if (this == &src)
        return *this;

    *m_brain = *(src.m_brain);
    type = src.type;
    std::cout << "Cat copy assignement called.\n";
    return *this;
}

Cat::~Cat()
{
    delete m_brain;
    std::cout << "Cat instance has been destructed.\n";
}

void Cat::makeSound() const
{
    std::cout << "MEOW MEOW NI**A\n";
}

void Cat::setIdea(std::string idea, int index)
{
    m_brain->setIdea(idea, index);
}

void Cat::showIdeas()
{
    m_brain->showIdeas();
}
