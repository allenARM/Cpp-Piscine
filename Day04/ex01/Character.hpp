#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

#include <iostream>
#include <string>

class	Character
{
	public:
		Character(void);
		Character(std::string const & name);
		Character(Character const & src);

		~Character(void);

		Character	&operator=(Character const & rhs);

		void				recoverAP(void);
		void				equip(AWeapon* gun);
		void				attack(Enemy* en);

		std::string	const	getName(void) const;
		AWeapon*			getWeapon(void) const;
		int					getAP(void) const;
	
	private:
		std::string			_name;
		int					_AP;
		AWeapon				*_gun;
};

std::ostream            &operator<<(std::ostream &out, Character const &in);

#endif