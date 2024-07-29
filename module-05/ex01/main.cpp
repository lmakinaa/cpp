#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
	try
	{
		Bureaucrat b1("mowadaf1", 1);
		std::cout << b1;

		Form f1("Permi", 2, 151);
		std::cout << f1;
		
	}
	catch (std::exception & e)
	{
		std::cerr << "Exception caught: " << e.what() << '\n';
	}


	Bureaucrat b2("lm9adem", 3);
	Form f2("Chahadat sokna", 1, 2);
	b2.signForm(f2);


	Bureaucrat b3("l9ayd", 2);
	b3.signForm(f2);


	return 0;
}