#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm()
	: AForm("PresidentialPardonForm", 5, 25)
	, m_target ("Undefined")
{
	m_task = "Presidential Pardon request";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("PresidentialPardonForm", 5, 25)
	, m_target (target)
{
	m_task = "Presidential Pardon request";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src)
	: AForm(src.getName(), src.getGradeToExecute()
	, src.getGradeToSign())
	, m_target (src.m_target)
{
	m_task = src.m_task;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
	if (this == &src)
		return *this;

	m_target = src.m_target;
	m_task = src.m_task;
	return *this;
}

void PresidentialPardonForm::execForm() const
{
	std::cout << "* " << m_target << " has been pardoned by Zaphod Beeblebrox. *\n";
}
