#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{

public:
    Cat();
    Cat(const Cat& src);
    Cat& operator=(const Cat& src);
    ~Cat();

    void makeSound() const;
    void setIdea(std::string idea, int index);
    void showIdeas();

private:
    Brain* m_brain;

};

#endif
