#include "Fixed.class.hpp"

const int    Fixed::_fractbits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_nbfixed = 0;
}

Fixed::Fixed(int const val)
{
	std::cout << "Int constructor called" << std::endl;
	this->_nbfixed = val << _fractbits;
}

Fixed::Fixed(float const valf)
{
	std::cout << "Float constructor called" << std::endl;
	this->_nbfixed = roundf(valf * (1 << _fractbits));
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Default destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_nbfixed = rhs.getRawBits();
	return (*this);
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

std::ostream            &operator<<(std::ostream &out, Fixed const &val)
{
	return (out << val.toFloat());
}