#include "Character.hpp"

Character::Character(void){}

Character::Character(std::string const & name)
{
	this->_name = name;
	this->_AP = 40;
	this->_gun = NULL;
}

Character::Character(Character const & src)
{
	*this = src;
}
Character::~Character(void){}

Character	&Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		this->_AP = rhs._AP;
		this->_gun = rhs._gun;
		this->_name = rhs._name;
	}
	return (*this);
}

void				Character::recoverAP(void)
{
	if (this->_AP + 10 >= 40)
		this->_AP = 40;
	else
		this->_AP += 10;
}

void				Character::equip(AWeapon* gun)
{
	this->_gun = gun;
}

void				Character::attack(Enemy* en)
{
	if (this->_AP - (this->_gun->getAPCost()) <= (this->_gun->getAPCost()))
	{
		std::cout << "Not enough AP" << std::endl;
		return ;
	}
	else if (this->_gun && en)
		this->_AP -= (this->_gun->getAPCost());
	std::cout << this->_name << " attacks " << en->getType() << " with a " << this->_gun->getName() << std::endl;
	this->_gun->attack();
	en->takeDamage(this->_gun->getDamage());
	if (en->getHP() == 0)
		delete en;
}

std::string	const	Character::getName(void) const
{ return (this->_name); }

AWeapon*			Character::getWeapon(void) const
{ return (this->_gun); }

int					Character::getAP(void) const
{ return (this->_AP); }

std::ostream            &operator<<(std::ostream &out, Character const &in)
{
	if (in.getWeapon())
		return (out << in.getName() << " has " << in.getAP() << " AP and wields a " << in.getWeapon()->getName() << std::endl);
	else
		return (out << in.getName() << " has " << in.getAP() << " AP and is unarmed" << std::endl);
}