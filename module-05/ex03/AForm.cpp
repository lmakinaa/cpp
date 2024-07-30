#include "AForm.hpp"

// Too high exception
AForm::GradeTooHighException::GradeTooHighException(std::string error)
	: m_error (error)
{
}
const char* AForm::GradeTooHighException::what() const NOEXCEPT
{
	return AForm::GradeTooHighException::m_error.c_str();
}
AForm::GradeTooHighException::~GradeTooHighException() NOEXCEPT {}

// Too low exception
AForm::GradeTooLowException::GradeTooLowException(std::string error)
	: m_error (error)
{

}
const char* AForm::GradeTooLowException::what() const NOEXCEPT
{
	return m_error.c_str();
}
AForm::GradeTooLowException::~GradeTooLowException() NOEXCEPT {}


AForm::AForm(std::string name, int gradeToExec, int gradeToSign)
	: m_name (name)
	, m_gradeToExecute (gradeToExec)
	, m_gradeToSign (gradeToSign)
	, m_signed (false)
{
	if (m_gradeToExecute < 1 || m_gradeToExecute < 1)
		throw GradeTooHighException("Grade is too Hight for it to be a valide grade");
	else if (m_gradeToExecute > 150 || m_gradeToSign > 150)
		throw GradeTooLowException("Grade is too Low for it to be a valide grade");
}

AForm::AForm()
	: m_name ("Undefined")
	, m_gradeToExecute (1)
	, m_gradeToSign (1)
	, m_signed (false)
{
}

AForm::~AForm()
{
}

AForm::AForm(const AForm& src)
	: m_name (src.m_name)
	, m_gradeToExecute (src.m_gradeToExecute)
	, m_gradeToSign (src.m_gradeToSign)
	, m_signed (src.m_signed)
{
}

AForm& AForm::operator=(const AForm& src)
{
	if (this == &src)
		return *this;

	m_signed = src.m_signed;

	return *this;
}

const std::string& AForm::getName() const
{
	return m_name;
}

int AForm::getGradeToExecute() const
{
	return m_gradeToExecute;
}

int AForm::getGradeToSign() const
{
	return m_gradeToSign;
}

bool AForm::getSigned() const
{
	return m_signed;
}

void AForm::beSigned(Bureaucrat& worker)
{
	if (worker.getGrade() <= m_gradeToSign)
		m_signed = true;
	else
		throw AForm::GradeTooLowException("Grade is too Low for it to be a valide grade");
}

void AForm::execute(const Bureaucrat& executor) const
{
	if (!m_signed || executor.getGrade() > getGradeToExecute())
		throw AForm::GradeTooLowException("The " + m_task + " has been denied");
	execForm();
}

std::ostream& operator<<(std::ostream& out, const AForm& in)
{
	out << in.getName() << ", Form grade required to sign is " 
		<< in.getGradeToSign() << " and grade required to execute is "
		<< in.getGradeToExecute() << ".\n";
	return out;
}
