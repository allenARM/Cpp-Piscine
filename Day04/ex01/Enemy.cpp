#include "Enemy.hpp"

Enemy::Enemy(void){}

Enemy::Enemy(Enemy const & src)
{
	*this = src;
}

Enemy::Enemy(int hp, std::string const & type)
{
	this->_hp = hp;
	this->_type = type;
}

Enemy::~Enemy(void){}

std::string const	Enemy::getType(void) const
{
	return (this->_type);
}

int					Enemy::getHP(void) const
{
	return (this->_hp);
}

Enemy& Enemy::operator=(Enemy const &rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs._hp;
		this->_type = rhs._type;
	}
	return (*this);
}

void	Enemy::takeDamage(int dmg)
{
	if (this->_hp - dmg <= 0)
		this->_hp = 0;
	else
		this->_hp -= dmg;
}
