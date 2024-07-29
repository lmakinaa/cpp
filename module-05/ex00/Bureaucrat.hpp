#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#ifndef NOEXCEPT
# define NOEXCEPT throw()
#endif

#include <iostream>
#include <string>

class Bureaucrat
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
	Bureaucrat(std::string name, int grade);

	Bureaucrat();
	Bureaucrat(const Bureaucrat& src);
	Bureaucrat& operator=(const Bureaucrat& src);
	~Bureaucrat();
	

	void incrementGrade();
	void decrementGrade();

	const std::string& getName() const;
	int getGrade() const;

private:
	const std::string m_name;
	int	m_grade;

};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& in);

#endif