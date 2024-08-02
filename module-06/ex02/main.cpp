#include "utils.hpp"

int main()
{
	std::srand(std::time(0));

	Base* r1 = generate();
	identify(r1);


	Base* r2 = generate();
	identify(r2);


	Base& r3 = *generate();
	identify(r3);


	Base& r4 = *generate();
	identify(r4);

	return 0;
}
