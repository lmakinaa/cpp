/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:49:29 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/09 21:19:42 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info()
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning()
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error()
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::startComplaining(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int c = -1;
	for (int i = 0; i < 4; i++)
	{
		if (level.compare(levels[i]) == 0)
		{
			c = i;
			break ;
		}
	}

	switch (c)
	{
	case 0:
		serieOfComplain(0);
		break;
	case 1:
		serieOfComplain(1);
		break;
	case 2:
		serieOfComplain(2);
		break;
	case 3:
		serieOfComplain(3);
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		break;
	}
}

void Harl::serieOfComplain(int c)
{
	t_m_func actions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	while (c < 4)
	{
		(this->*actions[c])();
		std::cout << '\n';
		c++;
	}
}

