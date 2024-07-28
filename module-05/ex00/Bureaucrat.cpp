#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	throw - 1;
}

Bureaucrat::~Bureaucrat()
{
}

const std::string& Bureaucrat::getName() const
{
	return m_name;
}

int Bureaucrat::getGrade() const
{
	return m_grade;
}