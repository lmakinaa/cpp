/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:40:30 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/05 13:02:08 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iostream>
#include <iomanip>
#include <sstream>
#include <cctype>
#include "Contact.hpp"

class PhoneBook
{
private:
	// the offset that indicate the current position in the m_m_contacts array
	int m_index;
	Contact m_contacts[8];
	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickname;
	std::string m_phoneNum;
	std::string m_darkestSecret;
	bool 		m_empty;

public:
	PhoneBook();
	void addCommand();
	void searchCommand();
	void runPhoneBook();
	void promptOneWord(const char *str, std::string& buffer);
	
};

#endif
