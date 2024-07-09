#include "MateriaSource.hpp"

MateriaSource::MateriaSource() // init members here
{
    for (int i = 0; i < 4; i++)
        m_slots[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
    (void) src;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src)
{
    // (assign operator overload) init or assign members here
    (void) src;
    return *this;
}

MateriaSource::~MateriaSource()
{
    // default destructor
}

void MateriaSource::learnMateria(AMateria* materia)
{
    if (!materia)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (!m_slots[i])
        {
            m_slots[i] = materia->clone();
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (m_slots[i])
        {
            if (type.compare(m_slots[i]->getType()) == 0)
                return m_slots[i]->clone();
        }
    }
    return 0;
}
