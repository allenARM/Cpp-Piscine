#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void)
{
	this->_hp = 80;
	this->_type = "RadScorpion";
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & src)
{
	*this = src;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion	&RadScorpion::operator=(RadScorpion const &rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs._hp;
		this->_type = rhs._type;
	}
	return (*this);
}