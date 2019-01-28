#include "Peon.hpp"

Peon::Peon(void) {}

Peon::Peon(std::string name)
{
	this->_name = name;
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &src)
{
	*this = src;
}

Peon::~Peon(void)
{
	std::cout << "Blueark..." << std::endl;
}

Peon& Peon::operator=(Peon const &rhs)
{
	if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}

void Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}