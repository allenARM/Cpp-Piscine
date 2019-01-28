#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(Zombie *zomb)
{
	std::string buf;
	std::cout << "Enter zombie type plz: ";
	std::cin >> buf;
	zomb->settype(buf);
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	std::string buf;

	Zombie *zombarik = new Zombie;
	zombarik->setname(name);
	std::cout << "Enter zombie type plz: ";
	std::cin >> buf;
	zombarik->settype(buf);
	return (zombarik);
}