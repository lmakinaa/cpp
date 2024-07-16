/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:50:49 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/06 17:59:39 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void f()
{
	system("leaks zombies");
}

int main()
{
	atexit(f);
	Zombie* zombies = zombieHorde(6, "Zombie-Nx");
	
	for (int i = 0; i < 6; i++)
		zombies[i].announce();
	delete[] zombies;
	return 0;
}
