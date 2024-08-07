#include "FragTrap.hpp"

int main()
{
    FragTrap p1("Da-Hmad");
    FragTrap p2("Si-Slimane");

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
    
    p1.highFivesGuys();
    p2.highFivesGuys();

    std::cout << std::endl;

    return 0;
}   
