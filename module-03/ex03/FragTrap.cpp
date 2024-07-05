#include "FragTrap.hpp"

FragTrap::FragTrap(const char* name)
    : ClapTrap(name)
{
    m_hitPts = 100;
    m_energyPts = 100;
    m_attackDamage = 30;
    std::cout << m_name << " has been upgraded to a FragTrap!\n";
}

FragTrap::~FragTrap()
{
    std::cout << m_name << " has been downgraded to a ScavTrap!\n";
}

void FragTrap::highFivesGuys()
{
    if (m_energyPts < 1)
    {
        std::cout << "FragTrap " << m_name << " hasn't enough energy!\n";
        return ;
    }
    std::cout << "FragTrap " << m_name << " <High fives buddy!>\n";
    m_energyPts--;
}

