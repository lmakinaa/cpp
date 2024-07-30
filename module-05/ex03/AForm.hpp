#ifndef AFORM_HPP
# define AFORM_HPP

#ifndef NOEXCEPT
# define NOEXCEPT throw()
#endif

#include <iostream>
#include <string>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

public:
	class GradeTooHighException: public std::exception
	{
	public:
		GradeTooHighException(std::string error);
		~GradeTooHighException() NOEXCEPT;
		const char* what() const NOEXCEPT;
	private:
		std::string m_error;
	};

	class GradeTooLowException: public std::exception
	{
	public:
		GradeTooLowException(std::string error);
		~GradeTooLowException() NOEXCEPT;
		const char* what() const NOEXCEPT;
	private:
		std::string m_error;
	};

public:
	AForm(std::string name, int gradeToExec, int gradeToSign);

	AForm();
	AForm(const AForm& src);
	AForm& operator=(const AForm& src);
	virtual ~AForm();

	const std::string& getName() const;
	int getGradeToExecute() const;
	int getGradeToSign() const;
	bool getSigned() const;
	void beSigned(Bureaucrat& worker);
	void execute(Bureaucrat const & executor) const;
	virtual void execForm() const = 0;

protected:
	std::string m_task;

private:
	const std::string m_name;
	const int m_gradeToExecute;
	const int m_gradeToSign;
	bool m_signed;

};

std::ostream& operator<<(std::ostream& out, const AForm& in);

#endif