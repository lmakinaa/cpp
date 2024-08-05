#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& src);
    ~WrongAnimal();
    WrongAnimal& operator=(const WrongAnimal& src);

    void makeSound() const;
    const std::string& getType() const;

protected:
    std::string type;

};

#endif
