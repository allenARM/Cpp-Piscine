#include "PowerFist.hpp"

PowerFist::PowerFist(void)
{
	this->_name = "Power Fist";
	this->_damage = 50;
	this->_apcost = 8;
}

PowerFist::PowerFist(const PowerFist &src)
{
	*this = src;
}

PowerFist::~PowerFist(void) {}

PowerFist   &PowerFist::operator=(const PowerFist &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_damage = rhs._damage;
		this->_apcost = rhs._apcost;
	}
	return (*this);
}

void  PowerFist::attack(void) const
{
	std::cout << "*  pschhh... SBAM! *" << std::endl;
}