#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name) 
    : m_name (name)
    , m_hitPts (10)
    , m_energyPts (10)
    , m_attackDamage (0)
{
    std::cout << name << " has been created\n";
}

ClapTrap::ClapTrap(const ClapTrap& src)
    : m_name (src.m_name)
    , m_hitPts (src.m_hitPts)
    , m_energyPts (src.m_energyPts)
    , m_attackDamage (src.m_attackDamage)
{
    std::cout << m_name << " has been created\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
    if (this == &src)
        return *this;

    m_name = src.m_name;
    m_energyPts = src.m_energyPts;
    m_hitPts = src.m_hitPts;
    m_attackDamage = src.m_attackDamage;

    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << m_name << " has been destroyed\n";
}

// getters

const std::string& ClapTrap::getName() const
{
    return (m_name);
}

unsigned int ClapTrap::getAttackDamage() const
{
    return (m_attackDamage);
}

// Other function members

void ClapTrap::attack(const std::string& target)
{
    if (m_energyPts < 1)
    {
        std::cout << m_name << " has no energy points\n";
        return ;
    }
    m_energyPts -= 1;
    std::cout << "ClapTrap " << m_name << " attacked "
        << target << ", causing " << m_attackDamage
        << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (m_hitPts < amount)
    {
        std::cout << "ClapTrap " << m_name
            << " hasn't enought hit points\n";
        return ;
    }
    m_hitPts -= amount; 
    std::cout << "ClapTrap " << m_name << " took " << amount
        << " of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (m_energyPts < amount)
    {
        std::cout << "ClapTrap " << m_name
            << " hasn't enought energy points\n";
        return ;
    }
    m_energyPts -= amount;
    m_hitPts += amount;
    std::cout << "ClapTrap " << m_name
        << " has gained " << amount << " hit points that cost him "
        << amount << " of energy points!\n";
}
