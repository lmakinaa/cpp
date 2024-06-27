/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:22:41 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/07 18:29:46 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

/*
* We use pointer here because ref should be initialized immmediatly, so
* as the HumanB not always have a weapon, referance is no longer an option
*/

class HumanB
{
	
public:
	HumanB(const char* name);
	~HumanB();
	void attack();
	void setWeapon(Weapon& weapon);

private:
	std::string m_name;
	Weapon* m_weapon;

};

#endif
