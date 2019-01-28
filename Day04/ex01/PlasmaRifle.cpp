#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void)
{
	this->_name = "Plasma Rifle";
	this->_damage = 21;
	this->_apcost = 5;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &src)
{
	*this = src;
}

PlasmaRifle::~PlasmaRifle(void) {}

PlasmaRifle   &PlasmaRifle::operator=(const PlasmaRifle &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_damage = rhs._damage;
		this->_apcost = rhs._apcost;
	}
	return (*this);
}

void  PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}