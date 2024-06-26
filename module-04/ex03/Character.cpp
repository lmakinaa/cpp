#include "Character.hpp"

Character::Character(const char* name)
    : m_name (name)
{
    for (int i = 0; i < 4; i++)
        m_slots[i] = NULL;
    // construction message
}

Character::Character(const Character& src)
{
    MateriasTracker tmp = m_materiasTracker;
    *this = src;
    m_materiasTracker = tmp;
}

Character& Character::operator=(const Character& src)
{
    if (this == &src)
        return *this;
    m_name = src.m_name;
    for (int i = 0; i < 4; i++)
    {
        if (m_slots[i])
            delete m_slots[i];
        if (!src.m_slots[i])
            m_slots[i] = NULL;
        else 
            m_slots[i] = src.m_slots[i]->clone();
    }
    m_materiasTracker = src.m_materiasTracker;
    return *this;
}

Character::~Character()
{
    m_materiasTracker.destructMaterias();
    for (int i = 0; i < 4; i++)
    {
        if (m_slots[i])
            delete m_slots[i];
    }
    // default destructor
}

const std::string& Character::getName() const 
{
    return m_name;
}

void Character::equip(AMateria* m)
{
    if (!m)
        return ;
    for (int i = 0; i < 4; i++)
    {
        if (m_slots[i] == NULL)
        {
            m_slots[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx > 3 || idx < 0)
        return ;
    if (!m_slots[idx])
        return ;
    m_materiasTracker.collectMateria(m_slots[idx]); 
    m_slots[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx > 3 || idx < 0)
        return ;
    if (!m_slots[idx])
        return ;
    m_slots[idx]->use(target);
}
