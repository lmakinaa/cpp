#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

//void f()
//{
//	system("leaks lmghrib");
//}

int main ()
{
	//atexit(f);
	Intern someRandomIntern;
	AForm* rrf;

	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Bureaucrat b("lm9adem", 45);
		b.executeForm(*rrf); // It have a catch block

		b.signForm(*rrf);
		b.executeForm(*rrf);

		delete rrf;
		
	}
	catch (std::exception& e) // this may catch also the new exception
	{
		std::cerr << "Exception caught: " << e.what() << "\n";
	}

	return 0;
}