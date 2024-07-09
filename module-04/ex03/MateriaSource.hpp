#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{

public:
    MateriaSource();
    MateriaSource(const MateriaSource& src);
    ~MateriaSource();
    MateriaSource& operator=(const MateriaSource& src);

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
    
private:
    AMateria* m_slots[4];

};

#endif
