#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{

public:
    // Canonical form
    Cat();
    ~Cat();
    Cat(const Cat& src);
    Cat& operator=(const Cat& src);

    void makeSound() const;

};

#endif
