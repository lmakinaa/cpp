/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:46:48 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/07 18:29:30 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	
public:
	Harl();
	~Harl();
	void complain(std::string level);
	typedef void (Harl::*t_m_func) ();
	
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};


#endif