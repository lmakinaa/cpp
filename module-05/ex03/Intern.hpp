#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


class Intern
{
//typedef AForm* (Intern::*t_formMakers)(std::string) const;

public:
	class CannotCreateForm : public std::exception 
	{
	public:
		const char* what() const NOEXCEPT;
	};

public:

	Intern();
	Intern(const Intern& src);
	Intern& operator=(const Intern& src);
	~Intern();

	AForm* makeForm(std::string formName, std::string target) const;

private:
	AForm* makePresidentialPardonForm(std::string target) const;
	AForm* makeRobotomyRequestForm(std::string target) const;
	AForm* makeShrubberyCreationForm(std::string target) const;

};

#endif