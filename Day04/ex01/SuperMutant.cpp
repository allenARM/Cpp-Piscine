#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void)
{
	this->_hp = 170;
	this->_type = "Super Mutant";
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src)
{
	*this = src;
}
SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaaargh ..." << std::endl;
}

SuperMutant	&SuperMutant::operator=(SuperMutant const &rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs._hp;
		this->_type = rhs._type;
	}
	return (*this);
}

void	SuperMutant::takeDamage(int dmg)
{
	dmg -= 3;
	if (this->_hp - dmg <= 0)
		this->_hp = 0;
	else
		this->_hp -= dmg;
}