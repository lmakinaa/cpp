#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const char* name)
    : ClapTrap(name)
{
    this->m_hitPts = 100;
    this->m_energyPts = 50;
    this->m_attackDamage = 20;
    std::cout << name << " has been upgraded to a ScavTrap!\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << m_name << " has been downgraded to a ClapTrap!\n";
}

// Other member functions

void ScavTrap::attack(const std::string& target)
{
    if (m_energyPts < 1)
    {
        std::cout << m_name << " has no energy points\n";
        return ;
    }
    m_energyPts -= 1;
    std::cout << "ScavTrap " << m_name << " attacked "
        << target << ", causing " << m_attackDamage
        << " points of damage!\n"; 
}

void ScavTrap::guardGate() const
{
    std::cout << "ScavTrap " << m_name
        << " is now in Gate keeper mode!\n";
}
