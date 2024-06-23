#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{

public:
    FragTrap(const char* name);
    ~FragTrap();

    void highFivesGuys();

};

#endif
