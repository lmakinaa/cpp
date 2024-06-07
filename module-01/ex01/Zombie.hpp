/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:25:37 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/06 20:38:08 by ijaija           ###   ########.fr       */
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
	Zombie();
	~Zombie();
	void announce();
	void setName(std::string& name);
	
};

Zombie* zombieHorde(int N, std::string name);

#endif