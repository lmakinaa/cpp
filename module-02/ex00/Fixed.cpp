#include "Fixed.hpp"

Fixed::Fixed() // init members here
    : m_value (0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& src)
{
    std::cout << "Copy constructor called\n";
    this->setRawBits(src.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& src)
{
    if (this == &src)
        return *this;
    std::cout << "Copy assignement operator called\n";
    setRawBits(src.getRawBits());
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called\n";
    return m_value;
}

void Fixed::setRawBits(int const raw)
{
    m_value = raw;
}
