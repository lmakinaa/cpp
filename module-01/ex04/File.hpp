/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:28:13 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/07 21:07:16 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

#include <iostream>
#include <string>
#include <fstream>

class File
{
	
public:
	File(const char *filename);
	~File();
	int createReplaceFile(std::string match, const char* substitue);

private:
	std::string m_filename;
	std::ifstream m_inFileStream;

};

#endif
