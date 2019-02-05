#include "Converter.hpp"

int main(int argc, char **argv)
{
	double		value;
	int			precision;
	Converter	conveteri;

	int i = 1;
	while (i < argc)
	{
		std::cout << "string : " << argv[i] << std::endl;
		precision = conveteri.getPrecision(argv[i]);
		value = atof(argv[i]);
		checkChar(conveteri, value);
		checkInt(conveteri, value);
		checkDouble(conveteri, value, precision);
		checkFloat(conveteri, value, precision);
		i++;
	}
	return (0);
}