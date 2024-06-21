/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:25:37 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/06 16:11:18 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	
private:
	std::string m_name;

public:
	Zombie(std::string name);
	~Zombie();
	void announce();
	
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif