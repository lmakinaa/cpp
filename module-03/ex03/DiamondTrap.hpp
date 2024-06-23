#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

// the diamond problem is what this ex is about

class DiamondTrap : public ScavTrap, public FragTrap
{

public:
    DiamondTrap(const char* name);
    ~DiamondTrap();
    void whoAmI();
    using ScavTrap::attack;

private:
    std::string m_name;
    using FragTrap::m_hitPts;
    using ScavTrap::m_energyPts;
    using FragTrap::m_attackDamage;
};

#endif
