/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 20:50:10 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/07 16:22:04 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const char* name, Weapon& weapon)
	: m_weapon (weapon)
	, m_name (name)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << m_name << " attacks with their " << m_weapon.getType() << '\n';
}
