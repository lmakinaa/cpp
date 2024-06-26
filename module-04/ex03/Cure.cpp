#include "Cure.hpp"

Cure::Cure()
    : AMateria("cure")
{
    /*std::cout << "Cure constructed.\n";*/
}

Cure::Cure(const Cure& src)
    : AMateria("cure")
{
    *this = src;
    /*std::cout << "Cure copy constructed.\n";*/
}

Cure& Cure::operator=(const Cure& src)
{
    if (this == &src)
        return *this;
    m_type = src.m_type;
    return *this;
}

Cure::~Cure()
{
    /*std::cout << "Cure destructed.\n";*/
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void        Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
