#include "Bureaucrat.hpp"

int main ()
{
	try
	{ 
		Bureaucrat b1("mowadaf1", 1);
		std::cout << b1;

		Bureaucrat b2("mowadaf2", 0);
		std::cout << b2;
		
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << '\n';
	}

	try
	{
		Bureaucrat b3("mowadaf3", 150);
		std::cout << b3;

		Bureaucrat b4("mowadaf4", 151);
		std::cout << b4;
		
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << '\n';
		return 1;
	}


	return 0;
}