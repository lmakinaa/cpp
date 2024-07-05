#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const char* name) 
    : ClapTrap(name)
    , ScavTrap(name)
    , FragTrap(name)
{
    m_name = name;
    ClapTrap::m_name += "_clap_name";
    std::cout << name << " has been upgraded to a DiamondTrap!\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << m_name << " has been downgraded to a FragTrap!\n";
}

void DiamondTrap::whoAmI()
{
    std::cout << "My name is " << m_name
        << " and my ClapTrap name is " << ClapTrap::m_name
        << ".\n";  
}

