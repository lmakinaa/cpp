#include "ScalarConverter.hpp"

int main(int ac, char** av)
{
	if (ac != 2)
	{
		std::cout << "Wrong usage.\n";
		return 1;
	}
	else
		ScalarConverter::convert(av[1]);
	return 0;
}