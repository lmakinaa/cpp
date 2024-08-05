#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{

public:
    // Canonical form
    Animal();
    Animal(const Animal& src);
    virtual ~Animal();
    Animal& operator=(const Animal& src);

    // Getter
    const std::string& getType() const;

    virtual void makeSound() const;

protected:
    std::string type;

};

#endif
