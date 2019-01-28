#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &src)
{
	std::cout << "* teleports from space *" << std::endl;
	*this = src;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back ..." << std::endl;
}

AssaultTerminator			&AssaultTerminator::operator=(const AssaultTerminator &rhs)
{
	(void)rhs;
	return (*this);
}

void			AssaultTerminator::battleCry(void) const
{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void			AssaultTerminator::meleeAttack(void) const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

void			AssaultTerminator::rangedAttack(void) const
{
	std::cout << "* does nothing *" << std::endl;
}

ISpaceMarine	*AssaultTerminator::clone(void) const
{
	return (new AssaultTerminator);
}