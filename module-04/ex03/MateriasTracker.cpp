#include "MateriasTracker.hpp"

MateriasTracker::MateriasTracker()
    : m_head (NULL)
    , m_tail (NULL)
    , m_count (0)
{
    // Constructor
}

MateriasTracker::~MateriasTracker()
{
    // Destructor
}

MateriasTracker& MateriasTracker::operator=(const MateriasTracker& src)
{
    if (this == &src)
        return *this;
    m_head = src.m_head;
    m_tail = src.m_tail;
    m_count = src.m_count;
    return *this;
}

void MateriasTracker::collectMateria(AMateria* materia)
{
    t_node* slot = new t_node;
    slot->materia = materia;
    slot->next = NULL;
    m_count++;

    if (!m_head)
    {
        m_head = slot;
        m_tail = slot;
    }
    else 
    {
        m_tail->next = slot;
        m_tail = slot;
    }
}

void MateriasTracker::destructMaterias()
{
    t_node* tmp;

    for (unsigned int i = 0; i < m_count; i++)
    {
        tmp = m_head->next;
        delete m_head;
        m_head = tmp;
    }
}

