#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{

public:
    ScavTrap(const char* name);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate() const;

};

#endif
