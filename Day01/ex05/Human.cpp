#include "Human.hpp"

Brain	Human::getBrain(void)
{
	return this->_brain;
}

std::string	Human::identify(void)
{
	return this->_brain.identify();
}