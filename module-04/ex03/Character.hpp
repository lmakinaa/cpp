#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "MateriasTracker.hpp"
#include "AMateria.hpp"

class Character : public ICharacter 
{

public:
    Character(const std::string name);
    Character(const Character& src);
    ~Character();
    Character& operator=(const Character& src);

    const std::string& getName() const;

    void                equip(AMateria* m);
    void                unequip(int idx);
    void                use(int idx, ICharacter& target);

private:
    std::string m_name;
    AMateria* m_slots[4];
    MateriasTracker m_materiasTracker;        
    
};

#endif
