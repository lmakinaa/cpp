#include "Bureaucrat.hpp"

// Too high exception
const char* Bureaucrat::GradeTooHighException::what() const NOEXCEPT
{
	return "Grade is too Hight for it to be a valide grade";
}

// Too low exception
const char* Bureaucrat::GradeTooLowException::what() const NOEXCEPT
{
	return "Grade is too low for it to be a valide grade";
}


Bureaucrat::Bureaucrat(std::string name, int grade)
	: m_name (name)
	, m_grade (grade)
{
	if (m_grade < 1)
		throw GradeTooHighException();
	else if (m_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat()
	: m_name ("Undefined")
	, m_grade (150)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
	: m_name (src.m_name)
	, m_grade (src.m_grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
	if (this == &src)
		return *this;

	m_grade = src.m_grade;

	return *this;
}

const std::string& Bureaucrat::getName() const
{
	return m_name;
}

int Bureaucrat::getGrade() const
{
	return m_grade;
}

void Bureaucrat::incrementGrade()
{
	if (m_grade == 1)
		throw GradeTooHighException();
	m_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (m_grade == 150)
		throw GradeTooLowException();
	m_grade++;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& in)
{
	out << in.getName() << ", bureaucrat grade " << in.getGrade() << ".\n";
	return out;
}
