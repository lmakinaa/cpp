#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
    : ClapTrap()
{
    m_hitPts = 100;
    m_energyPts = 50;
    m_attackDamage = 20;
    std::cout << "Default constructor called\n";
}

ScavTrap::ScavTrap(const std::string name)
    : ClapTrap(name)
{
    m_hitPts = 100;
    m_energyPts = 50;
    m_attackDamage = 20;
    std::cout << name << " has been upgraded to a ScavTrap!\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << m_name << " has been downgraded to a ClapTrap!\n";
}

ScavTrap::ScavTrap(const ScavTrap& src)
    : ClapTrap(src.m_name)
{
    *this = src;
    std::cout << m_name << " has been copy upgraded to a ScavTrap!\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
    if (this == &src)
        return *this;
    m_name = src.m_name;
    m_hitPts = src.m_hitPts;
    m_energyPts = src.m_energyPts;
    m_attackDamage = src.m_attackDamage;
    
    return *this;
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
