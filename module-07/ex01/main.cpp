#include "iter.hpp"

int main()
{
	std::string test[5] = {"hello", "world", "I", "am", "coding!"};
  std::string msg = "Function template instancied using the type std::string!\n";
	ft_print<std::string>(msg);
	
	iter(test, 5, ft_print<std::string>);
	  
	return 0;
}
