#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() // init members here
    : m_value (0)
{
    /*std::cout << "Default constructor called\n";*/
}

Fixed::Fixed(const Fixed& src)
{
    /*std::cout << "Copy constructor called\n";*/
    this->setRawBits(src.getRawBits());
}

Fixed::Fixed(const int intNum)
    : m_value (intNum << Fixed::m_frac_bits)
{
    /*std::cout << "Int constructor called\n";*/
}

Fixed::Fixed(const float floatNum)
    : m_value (roundf(floatNum * (1 << m_frac_bits)))
{
    /*std::cout << "Float constructor called\n";*/
}

Fixed::~Fixed()
{
    /*std::cout << "Destructor called\n";*/
}

Fixed& Fixed::operator=(const Fixed& src)
{
    if (this == &src)
        return *this;
    /*std::cout << "Copy assignement operator called\n";*/
    setRawBits(src.getRawBits());
    return *this;
}

// Comparaison ops

bool Fixed::operator>(const Fixed& rOperand) const
{
    return (m_value > rOperand.m_value); 
}

bool Fixed::operator<(const Fixed& rOperand) const
{
    return (m_value < rOperand.m_value); 
}

bool Fixed::operator>=(const Fixed& rOperand) const
{
    return (m_value >= rOperand.m_value); 
}

bool Fixed::operator<=(const Fixed& rOperand) const
{
    return (m_value <= rOperand.m_value); 
}

bool Fixed::operator==(const Fixed& rOperand) const
{
    return (m_value == rOperand.m_value); 
}

bool Fixed::operator!=(const Fixed& rOperand) const
{
    return (m_value != rOperand.m_value); 
}

// Arethmetic ops

Fixed Fixed::operator+(const Fixed& rOperand)
{
    return (Fixed(this->toFloat() + rOperand.toFloat()));
}

Fixed Fixed::operator-(const Fixed& rOperand)
{
    return (Fixed(this->toFloat() - rOperand.toFloat()));
}

Fixed Fixed::operator*(const Fixed& rOperand)
{
    return (Fixed(this->toFloat() * rOperand.toFloat()));
}

Fixed Fixed::operator/(const Fixed& rOperand)
{
    return (Fixed(this->toFloat() / rOperand.toFloat()));
}

// Increment/Decrement ops

Fixed& Fixed::operator++()
{
    m_value++;
    return *this;
}

Fixed& Fixed::operator++(int)
{
    m_value++;
    return *this;
}

Fixed& Fixed::operator--()
{
    m_value--;
    return *this;
}

Fixed& Fixed::operator--(int)
{
    m_value--;
    return *this;
}

// other function members

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

Fixed& Fixed::min(Fixed& fp1, Fixed& fp2)
{
    if (fp1.toFloat() > fp2.toFloat())
        return fp2;
    return fp1;
}

const Fixed& Fixed::min(const Fixed& fp1, const Fixed& fp2)
{
    if (fp1.toFloat() > fp2.toFloat())
        return fp2;
    return fp1;
}

Fixed& Fixed::max(Fixed& fp1, Fixed& fp2)
{
    if (fp1.toFloat() > fp2.toFloat())
        return fp1;
    return fp2;
}

const Fixed& Fixed::max(const Fixed& fp1, const Fixed& fp2)
{
    if (fp1.toFloat() > fp2.toFloat())
        return fp1;
    return fp2;
}

// other functions

std::ostream& operator<<(std::ostream& out, const Fixed& inFixedPoint)
{
    out << inFixedPoint.toFloat();
    return out;
}
