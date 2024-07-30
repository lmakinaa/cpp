#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm()
	: AForm("RobotomyRequestForm", 45, 72)
	, m_target ("Undefined")
{
	m_task = "Robotomy Request";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: AForm("RobotomyRequestForm", 45, 72)
	, m_target (target)
{
	m_task = "Robotomy Request";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
	: AForm(src.getName()
	, src.getGradeToExecute()
	, src.getGradeToSign())
	, m_target (src.m_target)
{
	m_task = src.m_task;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	if (this == &src)
		return *this;

	m_target = src.m_target;
	m_task = src.m_task;

	return *this;
}

void RobotomyRequestForm::execForm() const
{
	std::cout << "* DRRRiiiiiiNNN *\n";
	std::cout << "* " << m_target << " has been robotimized successfully 50% of the time *\n";
}
