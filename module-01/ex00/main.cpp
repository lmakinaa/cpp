/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:10:46 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/06 16:14:17 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* z1 = newZombie("Zombie-N1");
	z1->announce();
	randomChump("Zombie-N2");
	//z1->~Zombie();
	delete z1;
}
