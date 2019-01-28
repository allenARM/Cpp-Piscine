#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"

class ZombieEvent
{
	public:
		void	setZombieType(Zombie *zomb);
		Zombie*	newZombie(std::string name);
};

#endif