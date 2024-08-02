#include "utils.hpp"

static Base* newA()
{
	return (new A);
}

static Base* newB()
{
	return (new B);
}

static Base* newC()
{
	return (new C);
}

Base * generate(void)
{
	Base* (*generators[3])() = {newA, newB, newC};
	return (generators[std::rand() % 3]());
}

void identify(Base* p)
{
	if (dynamic_cast<A*> (p))
		std::cout << "A\n";
	else if (dynamic_cast<B*> (p))
		std::cout << "B\n";
	else if (dynamic_cast<C*> (p))
		std::cout << "C\n";
}

void identify(Base& p)
{
	try {
		(void) dynamic_cast<A&>(p);
		std::cout << "A\n";
		return ;
	} catch (std::bad_cast) {}

	try {
		(void) dynamic_cast<B&>(p);
		std::cout << "B\n";
		return ;
	} catch (std::bad_cast) {}

	try {
		(void) dynamic_cast<C&>(p);
		std::cout << "C\n";
		return ;
	} catch (std::bad_cast) {}
}
