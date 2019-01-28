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

		Fixed& operator=(Fixed const & rhs);
		
		float	toFloat(void) const;
		int		toInt(void) const;

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_nbfixed;
		static const int	_fractbits;
	

};

std::ostream            &operator<<(std::ostream &out, Fixed const &in);


#endif