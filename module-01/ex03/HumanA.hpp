/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 20:44:50 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/07 16:25:12 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>


class HumanA
{
	
public:
	HumanA(const char* name, Weapon& weapon);
	~HumanA();
	void attack();

private:
	std::string m_name;
	Weapon& m_weapon;

};

#endif
