/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:39:26 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/05 12:16:23 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string m_firstName;
	std::string m_lastName;
	std::string m_nickname;
	std::string m_phoneNum;
	std::string m_darkestSecret;
	int 		m_index;

public:
	Contact();
	Contact(std::string firstName,
			std::string lastName,
			std::string nickName,
			std::string phoneNum,
			std::string darkestSecret,
			int index);
	void formatedPrint();
	void dumpInfo();
	void putWord(std::string& str);
};


#endif
