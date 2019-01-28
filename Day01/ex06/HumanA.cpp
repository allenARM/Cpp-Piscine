#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& gun)
{
	this->_gun = &gun;
	this->_name = name;
}

HumanA::~HumanA(void){}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_gun->getType() << std::endl;
}