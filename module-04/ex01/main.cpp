#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include <cstdlib>


void f()
{
    system("leaks polymorphism");
}

int main()
{
    /*atexit(f);*/
    
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;

    // other tests

    std::cout << "\n\t\tOther Tests:\t\t\n\n";

    Animal* hiwan[4] = {new Dog(), new Dog(), new Cat(), new Cat()}; 
    
    std::cout << std::endl;
    
    for (int i = 0; i < 4; i++)
        delete hiwan[i];


    // other tests

    std::cout << "\n\t\tOther Tests:\t\t\n\n";

    Dog shit;

    {
        Dog tt;
        tt = shit;

        Dog other(tt);
    }

    // other tests

    //Cat *m = new Cat;
    //m->setIdea("hhh", 0);
    //m->setIdea("tmjnin", 1);
    //m->showIdeas();

    //Cat d(*m);

    //delete m;
    //std::cout << "-----" << std::endl;

    //d.showIdeas();

    return 0;
}
