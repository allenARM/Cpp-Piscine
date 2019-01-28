#include "Pony.hpp"

Pony::Pony(void)
{
	std::cout << "Yeah, a new pony has beed born!" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "It was a nice pony, I am so sorry but your " \
	<< getname() << " died" << std::endl;
}

std::string	Pony::getage(void) { return (this->_age); }
std::string	Pony::getname(void) { return (this->_name); }
std::string	Pony::getcolor(void) { return (this->_color); }

void		Pony::setage(void)
{
	std::string buf;
	std::cout << "Enter age of your ponny: ";
	std::cin >> buf;
	this->_age = buf;
}
void		Pony::setname(void)
{
	std::string buf;
	std::cout << "Enter name of your ponny: ";
	std::cin >> buf;
	this->_name = buf;
}

void		Pony::setcolor(void)
{
	std::string buf;
	std::cout << "Enter color of your ponny: ";
	std::cin >> buf;
	this->_color = buf;
}