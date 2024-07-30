#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
	try {
		Bureaucrat b("lm9adem", 71);
		ShrubberyCreationForm f("Home");
		b.executeForm(f);

		b.signForm(f);
		b.executeForm(f);

		std::cout << std::endl;

		RobotomyRequestForm f1("Home");
		std::cout << std::endl;

		b.signForm(f1);
		b.executeForm(f1);

		std::cout << std::endl;
		
		Bureaucrat b1("l'Admin dyal lblad", 1);
		PresidentialPardonForm f2("Wjah lgdam");
		std::cout << std::endl;

		b1.signForm(f2);
		b1.executeForm(f2);
		
		std::cout << std::endl;

		b1.executeForm(f1);
	}
	catch (std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << '\n';
	}

	std::cout << std::endl;





	return 0;
}