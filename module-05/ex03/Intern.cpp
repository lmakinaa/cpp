#include "Intern.hpp"

const char* Intern::CannotCreateForm::what() const NOEXCEPT
{
	return "CannotCreateForm";
}

Intern::Intern()
{
}

Intern::Intern(const Intern& src)
{
	(void) src;
}

Intern& Intern::operator=(const Intern& src)
{
	(void) src;
	return *this;
}

Intern::~Intern()
{
}


AForm* Intern::makePresidentialPardonForm(std::string target) const {return (new ShrubberyCreationForm(target));}
AForm* Intern::makeRobotomyRequestForm(std::string target) const {return (new RobotomyRequestForm(target));}
AForm* Intern::makeShrubberyCreationForm(std::string target) const {return (new ShrubberyCreationForm(target));}

AForm* Intern::makeForm(std::string formName, std::string target) const
{
	std::string formNames[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	AForm* (Intern::*makers[3])(std::string) const = {&Intern::makeRobotomyRequestForm, &Intern::makeShrubberyCreationForm, &Intern::makePresidentialPardonForm};

	for (int i = 0; i < 3; i++) 
	{
		if (formName == formNames[i])
		{
			std::cout << "Intern creates " << formName << '\n';
			return (this->*(makers[i]))(target);
		}
	}

	std::cerr << "Intern cannot create the " << formName << " form\n";
	throw Intern::CannotCreateForm();
}
