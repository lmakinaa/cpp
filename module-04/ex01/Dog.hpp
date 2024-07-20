#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

public:
    Dog();
    Dog(const Dog& src);
    Dog& operator=(const Dog& src);
    ~Dog();

    void makeSound() const;

private:
    Brain* m_brain;

};

#endif
