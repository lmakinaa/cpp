/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:56:30 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/08 06:19:08 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

void f()
{
	system("lsof -c freplace");
}
//read all file
int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./freplace <filename> <match string> <substitute>\n";
		return 1;
	}
	atexit(f);
	File f(av[1]);
	if (f.createReplaceFile(av[2], av[3]) == 1)
		return (1);
	return 0;
}
