/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:31:14 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/05 12:56:56 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	m_empty = true;
}

void PhoneBook::runPhoneBook()
{
	std::string line;
	m_index = 0;
	while (1)
	{
		std::cout << "$> " << std::flush;
		std::getline(std::cin, line);
		if (line.compare("ADD") == 0)
			addCommand();
		else if (line.compare("SEARCH") == 0)
			searchCommand();
		else if (line.compare("EXIT") == 0)
			break ;
	}
}


void PhoneBook::addCommand()
{
	int	i;
	int phase = 0;

	while (phase != 5)
	{
		switch(phase)
		{
			case 0:
				promptUser("first name", m_firstName);
				phase = 1;
				break ;
			case 1:
				promptUser("last name", m_lastName);
				phase = 2;
				break ;
			case 2:
				promptUser("nickname", m_nickname);
				phase = 3;
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
	m_contacts[m_index] = Contact(m_firstName,
							  m_nickname,
							  m_lastName,
							  m_phoneNum,
							  m_darkestSecret,
							  m_index + 1);
	m_index = (m_index + 1 == 7) ? 0 : m_index + 1;
	if (m_empty == true)
		m_empty = false;
}


void PhoneBook::searchCommand()
{
	int query = 0;
	if (m_empty == true)
	{
		std::cout << "The phonebook is empty.\n";
		return;
	}
	for (int i = 0; i < m_index; i++)
		m_contacts[i].formatedPrint();
	while (1)
	{
		query = -1;
		std::cout << "Search by index: " << std::flush;
		std::cin >> query;
		if (!(query >= 1 && query <= 8))
		{
			std::cout << "Invalid query. Try again.\n";
			continue;
		}
		else
		{
			m_contacts[query - 1].dumpInfo();
			return ;
		}
	}
}

void PhoneBook::promptUser(const char *str, std::string& buffer)
{
	std::string word;
	while (1)
	{
		std::cout << "Enter " << str << ": " << std::flush;
		std::getline(std::cin, buffer);
		if (buffer.empty() == true)
			continue ;
		std::stringstream s(buffer);
		s >> std::ws >> word;
		if (word.empty() == true)
			continue ;
		buffer = word;
		break ;
	}
}
