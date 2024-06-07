/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:08:48 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/07 18:30:02 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/*
* The only difference between a pointer and referance is the syntax.
* The ref do the job of pointers implicitly.
* Also ref should be defined on declaration and cannot be changed after that
* to reference another var.
*/
int	main()
{
	// definitions
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;
	// addresses
	std::cout << &string << '\n';
	std::cout << stringPTR << '\n';
	std::cout << &stringREF << '\n';
	// values
	std::cout << string << '\n';
	std::cout << *stringPTR << '\n';
	std::cout << stringREF << '\n';
	return 0;
}
