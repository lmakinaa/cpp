#include "FragTrap.hpp"

FragTrap::FragTrap()
    : ClapTrap()
{
    m_hitPts = 100;
    m_energyPts = 100;
    m_attackDamage = 30;
    std::cout << "Default constructor called\n";
}

FragTrap::FragTrap(const std::string name)
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

FragTrap::FragTrap(const FragTrap& src)
    : ClapTrap(src.m_name)
{
    *this = src;
    std::cout << m_name << " has been copy upgraded to a FragTrap!\n";
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
    if (this == &src)
        return *this;
    this->m_name = src.m_name;
    this->m_hitPts = src.m_hitPts;
    this->m_energyPts = src.m_energyPts;
    this->m_attackDamage = src.m_attackDamage;
    
    return *this;
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

void FragTrap::attack(const std::string& target)
{
    if (m_energyPts < 1)
    {
        std::cout << m_name << " has no energy points\n";
        return ;
    }
    m_energyPts -= 1;
    std::cout << "FragTrap " << m_name << " attacked "
        << target << ", causing " << m_attackDamage
        << " points of damage!\n"; 
}
