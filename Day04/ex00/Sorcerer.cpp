#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void){}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	std::cout << name << ", " << title << ", is born !" << std::endl;
	this->_name = name;
	this->_title = title;
}

Sorcerer::Sorcerer(Sorcerer const& src)
{
	*this = src;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title <<
	", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer& Sorcerer::operator=(Sorcerer const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_title = rhs._title;
	}
	return (*this);
}

std::string	Sorcerer::getname(void) const { return (this->_name); }
std::string	Sorcerer::gettitle(void) const { return (this->_title); }

std::ostream            &operator<<(std::ostream &out, Sorcerer const &in)
{
	return (out << "I am " << in.getname() << ", " << in.gettitle() << ", " << "and I like ponies !" << std::endl);
}

void Sorcerer::polymorph(Victim const &vic) const
{
	return (vic.getPolymorphed());
}