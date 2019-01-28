#include "Brain.hpp"

Brain::Brain(void)
{
	this->setAddress();
}

Brain::~Brain(void) {}

void	Brain::setAddress(void)
{
	std::stringstream	buf;

	buf << this;

	this->_address = buf.str();
}

std::string	Brain::identify(void)
{
	return (this->_address);
}
