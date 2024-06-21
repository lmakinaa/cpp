/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:28:50 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/06 16:06:13 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	m_name = name;
}

Zombie::~Zombie()
{
	std::cout << m_name << " died.\n";
}

void Zombie::announce()
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ...\n";
}
