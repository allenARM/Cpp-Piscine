#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int num)
{
	int i = 0;
	this->_nbZombie = num;
	this->_army = new Zombie[num];
	while (i < num)
	{
		this->_army[i].setname(generateSTR());
		this->_army[i].settype("regular");
		i++;
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->_army;
}

void	ZombieHorde::announce(void)
{
	int i = 0;
	while (i < this->_nbZombie)
	{
		this->_army[i].announce();
		i++;
	}
}