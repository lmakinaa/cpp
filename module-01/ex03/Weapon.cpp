/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 20:42:07 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/07 16:19:48 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const char* type)
	: m_type (type)
{
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType()
{
	return (m_type);
}

void Weapon::setType(const char* type)
{
	m_type = type;
}
