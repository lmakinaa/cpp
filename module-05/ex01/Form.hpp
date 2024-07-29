#ifndef FORM_HPP
# define FORM_HPP

#ifndef NOEXCEPT
# define NOEXCEPT throw()
#endif

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

public:
	class GradeTooHighException: public std::exception
	{
	public:
		const char* what() const NOEXCEPT;
	};

	class GradeTooLowException: public std::exception
	{
	public:
		const char* what() const NOEXCEPT;
	};

public:
	Form(std::string name, int gradeToExec, int gradeToSign);

	Form();
	Form(const Form& src);
	Form& operator=(const Form& src);
	~Form();

	const std::string& getName() const;
	int getGradeToExecute() const;
	int getGradeToSign() const;
	bool getSigned() const;
	void beSigned(Bureaucrat& worker);

private:
	const std::string m_name;
	const int m_gradeToExecute;
	const int m_gradeToSign;
	bool m_signed;

};

std::ostream& operator<<(std::ostream& out, const Form& in);

#endif