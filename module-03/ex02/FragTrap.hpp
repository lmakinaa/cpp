#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
    // canonical form
    FragTrap();
    ~FragTrap();
    FragTrap(const FragTrap& src);
    FragTrap& operator=(const FragTrap& src);

    FragTrap(const char* name);

    void attack(const std::string& target);
    void highFivesGuys();

};

#endif
