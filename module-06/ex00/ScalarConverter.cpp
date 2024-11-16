#include "ScalarConverter.hpp"

static void convertChar(char c)
{
	std::cout << "char: '" << c << "'\n";
	std::cout << "int: " << (static_cast<int> (c)) << "\n";
	std::cout << "float: " << static_cast<float> (c) << ".0f\n";
	std::cout << "double: " << static_cast<double> (c) << ".0\n";
}

void ScalarConverter::convert(std::string literal)
{
	if (literal.size() == 1 && std::isalpha(literal[0])) {
		convertChar(literal[0]);
	} else {
		for (int i = 0; i < 4; i++) {
			try {
				switch (i)
				{
				case 0:
					std::cout << "char: ";
					{int tmp = std::stoi(literal);
					if (tmp < 0 || tmp > 127)
						std::cout << "impossible";
					else if (std::isprint(static_cast<char>(tmp)) == 0)
						std::cout << "Non displayable";
					else
						std::cout << '\'' << static_cast<char> (tmp) << '\'';}
					break;
				case 1:
					std::cout << "int: ";
					std::cout << std::stoi(literal);
					break;
				case 2:
					std::cout << "float: ";
					{float tmp = std::stof(literal);
					std::cout << tmp;
					if (static_cast<float>(static_cast<int>(tmp)) == tmp)
						std::cout << ".0";}
					std::cout << 'f';
					break;
				case 3:
					std::cout << "double: ";
					{double tmp = std::stod(literal);
					std::cout << tmp;
					if (static_cast<double>(static_cast<int>(tmp)) == tmp)
						std::cout << ".0";}
				}
			} catch (std::invalid_argument &e) {
				std::cout << "impossible";
			} catch (std::out_of_range &e) {
				std::cout << "impossible";
			}

			std::cout << std::endl;
		}
	}
}
