#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) 
    : m_type (type)
{
    /*std::cout << "AMateria constructed.\n";*/
}

AMateria::AMateria()
{
    /*std::cout << "AMateria constructed.\n";*/
}

AMateria::AMateria(const AMateria& src)
    : m_type (src.m_type)
{
    /*std::cout << "AMateria copy constructed.\n";*/
}

AMateria::~AMateria()
{
    /*std::cout << "AMateria destructed.\n";*/
}

std::string const & AMateria::getType() const
{
    return (m_type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria used abstractly on " << target.getName() << '\n'; 
}
