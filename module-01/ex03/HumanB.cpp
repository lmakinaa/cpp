/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:22:35 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/07 16:36:16 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const char* name)
	: m_name (name)
	, m_weapon (NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	if (m_weapon)
		std::cout << m_name << " attacks with their " << m_weapon->getType() << '\n';
}

void HumanB::setWeapon(Weapon& weapon)
{
	m_weapon = &weapon;
}
