#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon& gun);
		~HumanA(void);
		void	attack(void);
	private:
		Weapon* 	_gun;
		std::string _name;
};

#endif