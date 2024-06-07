/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 20:29:41 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/07 16:23:35 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{

public:
	Weapon(const char* type);
	~Weapon();
	const std::string& getType();
	void setType(const char *type);

private:
	std::string m_type;

};

#endif