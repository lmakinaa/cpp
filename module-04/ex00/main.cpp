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

    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    // Testing Wrong animal and Cat
    std::cout << "\n\t\t Wrong Animal \t\t\n" << std::endl;
    
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();
    const WrongCat* wrongCat = new WrongCat();

    std::cout << wrongI->getType() << std::endl;
    std::cout << wrongMeta->getType() << std::endl;
    
    wrongI->makeSound();
    wrongMeta->makeSound();
    wrongCat->makeSound();

    wrongCat->WrongAnimal::makeSound();

    delete wrongMeta;
    delete wrongI;
    delete wrongCat;

    return 0;
}
