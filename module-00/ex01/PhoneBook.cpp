/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:31:14 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/05 10:55:09 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

void PhoneBook::runPhoneBook()
{
	std::string line;
	index = 0;
	while (1)
	{
		std::cout << "$> " << std::flush;
		std::getline(std::cin, line);
		if (line.compare("ADD") == 0)
			addCommand();
		//else if (line.compare("SEARCH") == 0)
		//	searchCommand();
		//else if (line.compare("EXIT") == 0)
		//	exitCommand();
	}
}

void PhoneBook::addCommand()
{
	// what should the user enter.
	int	i;
	int phase = 0;

	while (phase != 5)
	{
		switch(phase)
		{
			case 0:
				std::cout << "Enter first name: " << std::flush;
				std::cin >> m_firstName;
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				phase = 1;
				break ;
			case 1:
				std::cout << "Enter last name: " << std::flush;
				std::cin >> m_lastName;
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				phase = 2;
				break ;
			case 2:
				std::cout << "Enter nickname: " << std::flush;
				std::cin >> m_nickname;
				phase = 3;
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				break ;
			case 3:
				std::cout << "Enter phone number: " << std::flush;
				std::getline(std::cin, m_phoneNum);
				i = 0;
				while (m_phoneNum[i] && isdigit(m_phoneNum[i]))
					i++;
				if (m_phoneNum[i] == '\0' && i != 0)
					phase = 4;
				break ;
			case 4:
				std::cout << "Enter darkest secret: " << std::flush;
				std::getline(std::cin, m_darkestSecret);
				phase = 5;
				break ;
		}
	}
	contacts[index] = Contact(m_firstName, m_nickname,  m_lastName, m_phoneNum, m_darkestSecret);
	contacts[index].print();
	index++;
	if (index == 8)
		index = 0;
}
