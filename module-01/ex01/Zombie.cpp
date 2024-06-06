/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:28:50 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/06 17:49:44 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << m_name << " died.\n";
}

void Zombie::announce()
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string name)
{
	m_name = name;
}
