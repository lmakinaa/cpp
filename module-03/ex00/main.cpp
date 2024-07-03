#include "ClapTrap.hpp"

int main()
{
    ClapTrap p1("Da-Hmad");
    ClapTrap p2("Si-Slimane");

    std::cout << std::endl;

    p1.attack(p2.getName());
    p2.takeDamage(p1.getAttackDamage());

    std::cout << std::endl;

    p2.attack(p1.getName());
    p1.takeDamage(p2.getAttackDamage());

    std::cout << std::endl;

    p1.attack(p2.getName());
    p2.takeDamage(p1.getAttackDamage());

    std::cout << std::endl;

    p1.beRepaired(9);
    p2.beRepaired(9);
   
    std::cout << std::endl;

    return 0;
}   
