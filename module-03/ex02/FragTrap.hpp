#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
    // canonical form
    FragTrap(const char* name);
    ~FragTrap();
    FragTrap(const FragTrap& src);
    FragTrap& operator=(const FragTrap& src);

    void highFivesGuys();

};

#endif
