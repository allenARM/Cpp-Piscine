#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB(void){}

void	HumanB::setWeapon(Weapon& gun)
{
	this->_gun = &gun;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_gun->getType() << std::endl;
}