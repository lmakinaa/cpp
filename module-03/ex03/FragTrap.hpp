#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

public:
    // canonical form
    FragTrap(const std::string name);
    ~FragTrap();
    FragTrap(const FragTrap& src);
    FragTrap& operator=(const FragTrap& src);

    void highFivesGuys();

protected:
    unsigned int m_hitPts;
    unsigned int m_energyPts;
    unsigned int m_attackDamage;

};

#endif
