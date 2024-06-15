#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{

public:
    Fixed();
    Fixed(const Fixed& src);
    ~Fixed();
    Fixed& operator=(const Fixed& src);
    int getRawBits() const;
    void setRawBits(int const raw);

private:
    static const int m_frac_bits;
    int m_value;

};

#endif
