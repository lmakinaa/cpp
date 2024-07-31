#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>

class Serializer
{

public:
    Serializer();
    Serializer(const Serializer& src);
    ~Serializer();
    Serializer& operator=(const Serializer src);

private:
    // members here
};

#endif
