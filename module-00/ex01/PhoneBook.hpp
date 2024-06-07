/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:40:30 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/04 23:06:57 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];

	// the offset that indicate the current position in the contacts array
	int index;

	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickname;
	std::string m_phoneNum;
	std::string m_darkestSecret;

public:
	PhoneBook();
	void addCommand();
	//void searchCommand();
	//void exitCommand();
	void runPhoneBook();
};

#endif
