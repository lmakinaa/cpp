/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:49:12 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/07 17:51:53 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl wjah_l7abs;
	
	std::cout << "Debug level: ";
	wjah_l7abs.complain("DEBUG");
	std::cout << "Info level: ";
	wjah_l7abs.complain("INFO");
	std::cout << "Warning level: ";
	wjah_l7abs.complain("WARNING");
	std::cout << "Error level: ";
	wjah_l7abs.complain("ERROR");
	return 0;
}
