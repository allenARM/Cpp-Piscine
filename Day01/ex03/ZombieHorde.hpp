#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde(int num);
		~ZombieHorde(void);
		void	announce(void);
	private:
		Zombie	*_army;
		int		_nbZombie;
}; 

#endif