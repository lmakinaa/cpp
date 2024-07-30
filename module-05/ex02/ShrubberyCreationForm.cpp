#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubberyCreationForm", 137, 145)
	, m_target ("Undefined")
{
	m_task = "Shrubbery Creation request";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubberyCreationForm", 137, 145)
	, m_target (target)
{
	m_task = "Shrubbery Creation request";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src)
	: AForm(src.getName(), src.getGradeToExecute(), src.getGradeToSign())
	, m_target (src.m_target)
{
	m_task = src.m_task;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	if (this == &src)
		return *this;

	m_target = src.m_target;
	m_task = src.m_task;

	return *this;
}

void ShrubberyCreationForm::execForm() const
{
	std::ofstream f(m_target + "_shrubbery");
	f << "       /\\\n" << "      /  \\\n" << "     /    \\\n" 
	<< "    /______\\\n" << "       || \n" << "       || \n";
}
