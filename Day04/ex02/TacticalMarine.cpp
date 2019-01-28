#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine &src)
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
	*this = src;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine			&TacticalMarine::operator=(const TacticalMarine &rhs)
{
	(void)rhs;
	return (*this);
}

void			TacticalMarine::battleCry(void) const
{
	std::cout << "For the holy PLOT !" << std::endl;
}

void			TacticalMarine::meleeAttack(void) const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}

void			TacticalMarine::rangedAttack(void) const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

ISpaceMarine	*TacticalMarine::clone(void) const
{
	return (new TacticalMarine);
}