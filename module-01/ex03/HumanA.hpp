/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 20:44:50 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/07 18:29:40 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>


class HumanA
{
	
public:
	HumanA(const char* name, Weapon& weapon);
	~HumanA();
	void attack();

private:
	Weapon& m_weapon;
	std::string m_name;

};

#endif
