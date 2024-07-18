#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name)
	: ClapTrap(name)
	, ScavTrap(name)
	, FragTrap(name)
	, m_name (name)
{
    ClapTrap::m_name += "_clap_name";
    std::cout << name << " has been upgraded to a DiamondTrap!\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << m_name << " has been downgraded to a FragTrap!\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& src)
    : ClapTrap(src.m_name)
	, ScavTrap(src.m_name)
	, FragTrap(src.m_name)
{
    *this = src;
    std::cout << m_name << " has been copy upgraded to a DiamondTrap!\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
    if (this == &src)
        return *this;
    this->m_name = src.m_name;
    this->m_hitPts = src.m_hitPts;
    this->m_energyPts = src.m_energyPts;
    this->m_attackDamage = src.m_attackDamage;
    
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << m_name
        << " and my ClapTrap name is " << ClapTrap::m_name
        << ".\n";
}
