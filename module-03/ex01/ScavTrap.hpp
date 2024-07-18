#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
    // canonical form
    ScavTrap(const std::string name);
    ~ScavTrap();
    ScavTrap(const ScavTrap& src);
    ScavTrap& operator=(const ScavTrap& src);

    void attack(const std::string& target);
    void guardGate() const;

};

#endif
