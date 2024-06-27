/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:56:30 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/07 21:16:43 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./freplace <filename> <match string> <substitute>\n";
		return 1;
	}
	File f(av[1]);
	if (f.createReplaceFile(av[2], av[3]) == 1)
		return (1);
	return 0;
}
