#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{

public:
    // Caninical form
    ClapTrap();
    ClapTrap(const ClapTrap& src);
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap& src);
    
    ClapTrap(const std::string name);
    // getters
    const std::string& getName() const;
    unsigned int getAttackDamage() const;

    // Other functions
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

private:
    std::string m_name;
    unsigned int m_hitPts;
    unsigned int m_energyPts;
    unsigned int m_attackDamage;
};

#endif
