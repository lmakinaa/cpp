#include "Ice.hpp"

Ice::Ice()
    : AMateria("cure")
{
    /*std::cout << "Ice constructed.\n";*/
}

Ice::Ice(const Ice& src)
    : AMateria("ice")
{
    *this = src;
    /*std::cout << "Ice copy constructed.\n";*/
}

Ice& Ice::operator=(const Ice& src)
{
    if (this == &src)
        return *this;
    m_type = src.m_type;
    return *this;
}

Ice::~Ice()
{
    /*std::cout << "Ice destructed.\n";*/
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void        Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
