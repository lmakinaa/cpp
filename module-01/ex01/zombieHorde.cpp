/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:38:53 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/08 06:20:03 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// protect N negative
Zombie* zombieHorde(int N, std::string& name)
{
	Zombie* res = new Zombie[N];
	for (int i = 0; i < N; i++)
		res[i].setName(name);
	return (res);
}
