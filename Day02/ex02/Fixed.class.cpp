#include "Fixed.class.hpp"

const int    Fixed::_fractbits = 8;

Fixed::Fixed(void)
{
	this->_nbfixed = 0;
}

Fixed::Fixed(int const val)
{
	this->_nbfixed = val << _fractbits;
}

Fixed::Fixed(float const valf)
{
	this->_nbfixed = roundf(valf * (1 << _fractbits));
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed::~Fixed(void)
{
}

Fixed& Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
		this->_nbfixed = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	return (this->_nbfixed > rhs._nbfixed);
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	return (this->_nbfixed < rhs._nbfixed);
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	return (this->_nbfixed >= rhs._nbfixed);
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	return (this->_nbfixed <= rhs._nbfixed);
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	return (this->_nbfixed == rhs._nbfixed);
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	return (this->_nbfixed != rhs._nbfixed);
}

Fixed	Fixed::operator+(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_nbfixed / (1 << _fractbits));
}

int		Fixed::toInt(void) const
{
	return ((this->_nbfixed >> _fractbits));
}

int		Fixed::getRawBits(void) const
{
	return (this->_nbfixed);
}

void	Fixed::setRawBits(int const raw)
{
	this->_nbfixed = raw;
}

const Fixed&	Fixed::min(Fixed const &one, Fixed const &two)
{
	return (one < two ? one : two);
}

Fixed& 			Fixed::min(Fixed &one, Fixed &two)
{
	return (one < two ? one : two);
}

const Fixed&	Fixed::max(Fixed const &one, Fixed const &two)
{
	return (one > two ? one : two);
}

Fixed&			Fixed::max(Fixed &one, Fixed &two)
{
	return (one > two ? one : two);
}

Fixed&	Fixed::operator++(void)
{
	this->_nbfixed++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	idk = *this;
	operator++();
	return (idk);
}

Fixed&	Fixed::operator--(void)
{
	this->_nbfixed--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	idk = *this;
	operator--();
	return (idk);
}

std::ostream            &operator<<(std::ostream &out, Fixed const &val)
{
	return (out << val.toFloat());
}