#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{

public:
	Bureaucrat();
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