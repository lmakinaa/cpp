#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{

public:
    // constructors
    Fixed();
    Fixed(const Fixed& src);
    Fixed(const int intNum);
    Fixed(const float floatNum);

    // destructors
    ~Fixed();

    // operators
    Fixed& operator=(const Fixed& src);

    int getRawBits() const;
    void setRawBits(int const raw);
    float toFloat() const;
    int toInt() const;

private:
    static const int m_frac_bits = 8;
    int m_value;

};

std::ostream& operator<<(std::ostream& out, const Fixed& inFixedPoint);

#endif
