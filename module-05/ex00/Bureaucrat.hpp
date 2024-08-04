#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{

public:
	Bureaucrat();
	~Bureaucrat();
	const std::string& getName() const;
	int getGrade() const;
	void upgrade();
	void downgrade();
	std::ostream& operator<<(std::ostream& out, const Bureaucrat& in);

private:
	std::string m_name;
	int	m_grade;

};

#endif