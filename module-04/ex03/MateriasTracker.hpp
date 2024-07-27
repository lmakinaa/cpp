#ifndef MATERIASTRACKER_HPP
#define MATERIASTRACKER_HPP

#include "AMateria.hpp"

typedef struct s_node
{
    AMateria* materia;
    struct s_node* next;
}   t_node;

class MateriasTracker 
{

public:
    MateriasTracker();
    ~MateriasTracker();
    MateriasTracker& operator=(const MateriasTracker& src);
    MateriasTracker(const MateriasTracker& src);

    void collectMateria(AMateria* materia);
    void destructMaterias();

private:
    t_node* m_head;
    t_node* m_tail;
    unsigned int m_count;

};

#endif
