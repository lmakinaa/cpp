#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal
{

public:
    AAnimal();
    AAnimal(const AAnimal& src);
    virtual ~AAnimal();
    AAnimal& operator=(const AAnimal& src);
    virtual void makeSound() const = 0;
    const std::string& getType() const;

protected:
    std::string type;

};

#endif
