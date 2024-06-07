/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijaija <ijaija@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:32:05 by ijaija            #+#    #+#             */
/*   Updated: 2024/06/07 21:16:01 by ijaija           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

/*
* std::ifstream overloads the ! operator to call its fail() function, so its equivalent
* to calling .fail() member function
*/

File::File(const char *filename)
	: m_filename (filename)
	, m_inFileStream (m_filename)
{
	if (!m_inFileStream)
	{
		std::cerr << "Error while trying to open '" + m_filename + "' file for reading" << '\n';
		std::exit(1);
	}
}

File::~File()
{
	m_inFileStream.close();
}

int File::createReplaceFile(std::string match, const char* substitue)
{
	std::string replaceFileName = m_filename + ".replace";
	
	std::ofstream replaceFile (replaceFileName);
	if (!replaceFile)
	{
		m_inFileStream.close();
		std::cerr << "There was an error while trying to create replace file\n";
		return 1;
	}
	size_t pos;
	for (std::string line; std::getline(m_inFileStream, line);)
	{
		if (m_inFileStream.peek() != EOF)
			line += '\n';
		pos = line.find(match);
		if (pos != std::string::npos)
		{
			line.erase(pos, match.length());
			line.insert(pos, substitue);
		}
		replaceFile << line;
	}
	replaceFile.close();
	return 0;
}
