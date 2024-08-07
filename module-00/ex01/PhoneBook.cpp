/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:31:14 by ijaija            #+#    #+#             */
/*   Updated: 2024/07/29 23:08:04 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 
this is how switch works (t9riban):

switch (i) {
   case 1: printf("case 1"); break;
   case 2: printf("case 2"); break;
   case 3: printf("case 3"); break;
}
it could generate code roughly equivalent to something like this:

void case1() { printf("case 1"); }
void case2() { printf("case 2"); }
void case3() { printf("case 3"); }

typedef void (*pfunc)(void);

pfunc functions[3] = {case1, case2, case3};

if ((unsigned)i<3)    
    functions[i]();

*/

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	m_empty = true;
}

PhoneBook::~PhoneBook()
{
	m_empty = true;
}

void PhoneBook::runPhoneBook()
{
	std::string line;
	m_index = 0;
	while (std::cin.eof() == 0)
	{
		std::cout << "\033[0;33m$> \033[0m" << std::flush;
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

	while (phase != 5 && std::cin.eof() == 0)
	{
		switch(phase)
		{
			case 0:
				promptOneWord("first name", m_firstName);
				phase = 1;
				break ;
			case 1:
				promptOneWord("last name", m_lastName);
				phase = 2;
				break ;
			case 2:
				promptOneWord("nickname", m_nickname);
				phase = 3;
				break ;
			case 3:
				std::cout << "\033[1;32mEnter phone number: \033[0m" << std::flush;
				std::getline(std::cin, m_phoneNum);
				i = 0;
				while (m_phoneNum[i] && isdigit(m_phoneNum[i]))
					i++;
				if (m_phoneNum[i] == '\0' && i != 0)
					phase = 4;
				break ;
			case 4:
				std::cout << "\033[1;32mEnter darkest secret: \033[0m" << std::flush;
				std::getline(std::cin, m_darkestSecret);
				phase = 5;
				break ;
		}
	}
	m_contacts[m_index].setInfo(m_firstName,
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
		std::cout << "\033[1;31mThe phonebook is empty.\033[0m\n";
		return;
	}
	for (int i = 0; i < m_index; i++)
		m_contacts[i].formatedPrint();
	while (std::cin.eof() == 0)
	{
		query = -1;
		std::cout << "\033[0;33mSearch by index: \033[0m" << std::flush;
		std::cin >> query;
		std::cin.clear();
		std::cin.ignore(INT_MAX,'\n');
		if (!(query >= 1 && query <= 8))
		{
			std::cout << "\033[1;31mInvalid query. Try again.\033[0m\n";
			continue;
		}
		else
		{
			m_contacts[query - 1].dumpInfo();
			return ;
		}
	}
}

void PhoneBook::promptOneWord(const char *str, std::string& buffer)
{
	std::string word;
	while (std::cin.eof() == 0)
	{
		std::cout << "\033[1;32mEnter " << str << ": \033[0m" << std::flush;
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
