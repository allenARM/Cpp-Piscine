#include "AWeapon.hpp"

AWeapon::AWeapon(void) {}

AWeapon::AWeapon(const AWeapon &src) { *this = src; }

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	this->_name = name;
	this->_apcost = apcost;
	this->_damage = damage;
}

AWeapon::~AWeapon(void) {}

AWeapon&		AWeapon::operator=(const AWeapon &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_damage = rhs._damage;
		this->_apcost = rhs._apcost;
	}
	return (*this);
}

std::string		AWeapon::getName() const { return (this->_name); }

int				AWeapon::getAPCost() const { return (this->_apcost); }

int				AWeapon::getDamage() const { return (this->_damage); }