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

Fixed::Fixed(const int intNum)
    : m_value (intNum << Fixed::m_frac_bits)
{
    std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float floatNum)
    : m_value (floatNum * (1 << m_frac_bits))
{
    std::cout << "Float constructor called\n";
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
    return m_value;
}

void Fixed::setRawBits(int const raw)
{
    m_value = raw;
}

float Fixed::toFloat() const
{
    return static_cast<float>(m_value) / (1 << m_frac_bits);
}

int Fixed::toInt() const
{
    return m_value >> m_frac_bits;
}

std::ostream& operator<<(std::ostream& out, const Fixed& inFixedPoint)
{
    out << inFixedPoint.toFloat();
    return out;
}
