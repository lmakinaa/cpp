#include "Form.hpp"

// Too high exception
const char* Form::GradeTooHighException::what() const NOEXCEPT
{
	return "Grade is too Hight for it to be a valide grade";
}

// Too low exception
const char* Form::GradeTooLowException::what() const NOEXCEPT
{
	return "Grade is too low for it to be a valide grade";
}


Form::Form(std::string name, int gradeToExec, int gradeToSign)
	: m_name (name)
	, m_gradeToExecute (gradeToExec)
	, m_gradeToSign (gradeToSign)
	, m_signed (false)
{
	if (m_gradeToExecute < 1 || m_gradeToExecute < 1)
		throw GradeTooHighException();
	else if (m_gradeToExecute > 150 || m_gradeToSign > 150)
		throw GradeTooLowException();
}

Form::Form()
	: m_name ("Undefined")
	, m_gradeToExecute (1)
	, m_gradeToSign (1)
	, m_signed (false)
{
}

Form::~Form()
{
}

Form::Form(const Form& src)
	: m_name (src.m_name)
	, m_gradeToExecute (src.m_gradeToExecute)
	, m_gradeToSign (src.m_gradeToSign)
	, m_signed (src.m_signed)
{
}

Form& Form::operator=(const Form& src)
{
	if (this == &src)
		return *this;

	m_signed = src.m_signed;

	return *this;
}

const std::string& Form::getName() const
{
	return m_name;
}

int Form::getGradeToExecute() const
{
	return m_gradeToExecute;
}

int Form::getGradeToSign() const
{
	return m_gradeToSign;
}

bool Form::getSigned() const
{
	return m_signed;
}

void Form::beSigned(Bureaucrat& worker)
{
	if (worker.getGrade() <= m_gradeToSign)
		m_signed = true;
	else
		throw Form::GradeTooLowException();
}


std::ostream& operator<<(std::ostream& out, const Form& in)
{
	out << in.getName() << ", Form grade required to sign is " 
		<< in.getGradeToSign() << " and grade required to execute is "
		<< in.getGradeToExecute() << ".\n";
	return out;
}
