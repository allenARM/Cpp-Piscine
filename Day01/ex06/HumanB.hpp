#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);
		void	setWeapon(Weapon& gun);
		void	attack(void);
	private:
		Weapon* 	_gun;
		std::string	_name;
};

#endif