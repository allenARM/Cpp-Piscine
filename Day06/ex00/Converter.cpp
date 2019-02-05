#include "Converter.hpp"

Converter::Converter(void) {}
Converter::Converter(const Converter &src){ *this = src; }
Converter::~Converter(void) {}

Converter		&Converter::operator=(const Converter &rhs)
{
	static_cast <void> (rhs);
	return (*this);
}

char		Converter::makeChar(double num)
{
	char	c;

	if (std::isnan(num) == true)
	{
		throw(Converter::Impossible());
	}
	c = static_cast <char> (num);
	if (std::isprint(c) == false)
	{
		throw(Converter::Non_Displayable());
	}
	return (c);
}

int		Converter::makeint(double num)
{
	if (std::isnan(num) == true || std::isinf(num) == true)
	{
		throw(Converter::Impossible());
	}
	if ((num > static_cast <double> (INT_MAX)) || (num < static_cast <double> (INT_MIN)))
	{
		throw(Converter::Impossible());
	}
	return (static_cast <int> (num));
}

double	Converter::makedouble(double num)
{
	return (static_cast <double> (num));
}

float	Converter::makefloat(double num)
{
	return (static_cast <float> (num));
}

Converter::Non_Displayable::Non_Displayable(void){}
Converter::Non_Displayable::Non_Displayable(Converter::Non_Displayable const &src){ *this = src; }
Converter::Non_Displayable::~Non_Displayable(void) throw(){}

Converter::Non_Displayable	&Converter::Non_Displayable::operator=(const Converter::Non_Displayable &rhs)
{
	static_cast <void> (rhs);
	return (*this);
}

const char	*Converter::Non_Displayable::what(void) const throw() { return ("Non displayable"); }

Converter::Impossible::Impossible(void){}
Converter::Impossible::Impossible(Converter::Impossible const &src){ *this = src; }
Converter::Impossible::~Impossible(void) throw(){}

Converter::Impossible	&Converter::Impossible::operator=(const Converter::Impossible &rhs)
{
	static_cast <void> (rhs);
	return (*this);
}

const char	*Converter::Impossible::what(void) const throw() { return ("Impossible"); }

int Converter::getPrecision(char *s)
{
	unsigned int	before;
	unsigned int	after;
	char			*str;

	str = s;
	before = 0;
	while (str[before] && str[before] != '.')
		before += 1;
	after = before + 1;
	while (str[after] && isdigit(str[after]))
		after += 1;
	after -= before;
	return ((strlen(str) == before || after == 1) ? 1 : after - 1);
}

void         checkChar(Converter data, double value)
{
	try
	{
		std::cout << "char: " << data.makeChar(value) << std::endl; 
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void         checkInt(Converter data, double value)
{
	try
	{
		std::cout << "int: " << data.makeint(value) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void         checkDouble(Converter data, double value, int precision)
{
	try
	{
		std::cout << "Double: " << std::setprecision(precision) << data.makedouble(value) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void         checkFloat(Converter data, double value, int precision)
{
	try
	{
		std::cout << "Float: " << std::setprecision(precision) << data.makefloat(value) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
