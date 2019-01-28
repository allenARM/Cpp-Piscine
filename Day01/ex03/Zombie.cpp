#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "New Zombie Created..." << std::endl;
	this->_name = "NONAME";
	this->_type = "NOTYPE";
}

Zombie::~Zombie(void)
{
	std::cout << "YOU KILLED " << this->_name << " ZOMBIE!" << std::endl;
}

void	Zombie::setname(std::string str)
{
	this->_name = str;	
}

void	Zombie::settype(std::string str)
{
	this->_type = str;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << "> <" << this->_type << "> Braiiiiiiiiiinnnnnssssssss SUKA" << std::endl;
}