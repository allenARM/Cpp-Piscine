#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cfloat>

class Converter
{
	public:
		class Non_Displayable : public std::exception
		{
			public:
				Non_Displayable(void);
				Non_Displayable(Non_Displayable const &src);
				virtual ~Non_Displayable(void) throw();

				Non_Displayable		&operator=(const Non_Displayable &rhs);
				const char			*what(void) const throw();
		};
		class Impossible : public std::exception
		{
			public:
				Impossible(void);
				Impossible(Impossible const &src);
				virtual ~Impossible(void) throw();

				Impossible			&operator=(const Impossible &rhs);
				const char			*what(void) const throw();
		};
		Converter(void);
		Converter(const Converter &src);
		~Converter(void);

		Converter		&operator=(const Converter &rhs);

		static int		getPrecision(char *s);
		static char		makeChar(double num);
		static int		makeint(double num);
		static double	makedouble(double num);
		static float	makefloat(double num);
};

void         checkChar(Converter data, double value);
void         checkInt(Converter data, double value);
void         checkDouble(Converter data, double value, int precision);
void         checkFloat(Converter data, double value, int precision);

#endif