/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:37:51 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/04 23:06:47 by ijaija           ###   ########.fr       */
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
				 std::string darkestSecret)
{
	m_firstName = firstName;
	m_lastName = lastName;
	m_nickname = nickname;
	m_phoneNum = phoneNum;
	m_darkestSecret = darkestSecret;
}

void Contact::print()
{
	std::cout << "First Name: " << m_firstName << std::endl;
	std::cout << "Last Name: " << m_lastName << std::endl;
	std::cout << "Nickname: " << m_nickname << std::endl;
	std::cout << "Phone Number: " << m_phoneNum << std::endl;
	std::cout << "Darkest Secret: " << m_darkestSecret << std::endl;
}
	