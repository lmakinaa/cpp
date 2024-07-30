#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP


#include <iostream>
#include <string>
#include "AForm.hpp"


class ShrubberyCreationForm: public AForm
{

public:
	ShrubberyCreationForm(std::string target);

	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm& src);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& src);
	~ShrubberyCreationForm();

	void execForm() const;

private:
	std::string m_target;

};


#endif