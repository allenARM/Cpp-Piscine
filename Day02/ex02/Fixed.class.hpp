#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const val);
		Fixed(float const valf);
		~Fixed(void);

		Fixed&	operator=(Fixed const & rhs);
		bool	operator>(Fixed const & rhs) const;
		bool	operator<(Fixed const & rhs) const;
		bool	operator>=(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs) const;
		bool	operator==(Fixed const & rhs) const;
		bool	operator!=(Fixed const & rhs) const;

		Fixed	operator+(Fixed const & rhs) const;
		Fixed	operator-(Fixed const & rhs) const;
		Fixed	operator*(Fixed const & rhs) const;
		Fixed	operator/(Fixed const & rhs) const;

		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);

		float	toFloat(void) const;
		int		toInt(void) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		static const Fixed&	min(Fixed const &one, Fixed const &two);
		static Fixed& min(Fixed &one, Fixed &two);
		static const Fixed&	max(Fixed const &one, Fixed const &two);
		static Fixed& max(Fixed &one, Fixed &two);

	private:
		int					_nbfixed;
		static const int	_fractbits;
	

};

std::ostream            &operator<<(std::ostream &out, Fixed const &in);

#endif