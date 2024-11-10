#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <algorithm>
#include <cstdlib>

# define DEBUG 0

class RPN
{

public:
    static int evaluate(std::string expression);

private:
    RPN();
    RPN(const RPN&);
    RPN& operator=(const RPN&);
    ~RPN();

};

#endif
