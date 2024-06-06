/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 10:22:08 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/04 11:12:48 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	strUpper(std::string& str)
{
	for (size_t i = 0; i < str.length(); i++)
		str[i] = toupper(str[i]);
}

int main(int ac, char *av[])
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return 0;
	}
	std::string inputStr;
	for (int i = 1; i < ac; i++)
	{
		inputStr += av[i];
		if (i + 1 != ac)
			inputStr += ' ';
	}
	strUpper(inputStr);
	std::cout << inputStr << std::endl;
	return 0;
}
