#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{

public:
	// canonical form
	DiamondTrap(const std::string name);
    DiamondTrap(const DiamondTrap& src);
    ~DiamondTrap();
    DiamondTrap& operator=(const DiamondTrap& src);

	void whoAmI();
	using ScavTrap::attack;

private:
	std::string m_name;
    using FragTrap::m_hitPts;
    using ScavTrap::m_energyPts;
    using FragTrap::m_attackDamage;

};

#endif