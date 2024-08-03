#include "iter.hpp"

int main()
{
	std::string test[5] = {"hello", "world", "I", "am", "coding!"};
	ft_print<std::string>("Function template instancied using the type std::string!");
	
	iter<std::string, int, void>(test, 5, ft_print);
	
	return 0;
}