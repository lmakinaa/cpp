/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:37:51 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/05 11:49:21 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{	
}

Contact::Contact(std::string firstName,
				 std::string lastName,
				 std::string nickname,
				 std::string phoneNum,
				 std::string darkestSecret,
				 int 		 index)
{
	m_firstName = firstName;
	m_lastName = lastName;
	m_nickname = nickname;
	m_phoneNum = phoneNum;
	m_darkestSecret = darkestSecret;
	m_index = index;
}

void Contact::print()
{
	std::cout << '|' << std::setw(10) << m_index;
	putWord(m_firstName);
	putWord(m_lastName);
	putWord(m_nickname);
	putWord(m_phoneNum);
	putWord(m_darkestSecret);
	std::cout << '|' << std::endl;
}

void Contact::putWord(std::string& str)
{
	std::cout << '|';
	if (str.length() > 10)
		std::cout << std::setw(10) << str.substr(0, 10) << '.';
	else
		std::cout << std::setw(10) << str;
		
}
	