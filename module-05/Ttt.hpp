#ifndef TTT_HPP
# define TTT_HPP

#include <iostream>
#include <string>

class Ttt
{

public:
    Ttt();
    Ttt(const Ttt& src);
    ~Ttt();
    Ttt& operator=(const Ttt src);

private:
    // members here
};

#endif
