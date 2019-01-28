#include "Victim.hpp"

Victim::Victim(void){}

Victim::Victim(std::string name)
{
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
	this->_name = name;
}

Victim::Victim(Victim const &src)
{
	*this = src;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apperent reason !" << std::endl;
}

Victim& Victim::operator=(Victim const &rhs)
{
	if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}

std::string	Victim::getname(void) const { return (this->_name); }

std::ostream            &operator<<(std::ostream &out, Victim const &in)
{
	return(out << "I'm " << in.getname() << " and I like otters !" << std::endl);
}

void		Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}
