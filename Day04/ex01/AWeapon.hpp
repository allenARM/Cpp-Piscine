#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
	public:
		AWeapon(void);
		AWeapon(const AWeapon &src);
		AWeapon(std::string const &name, int apcost, int damage);
		
		virtual ~AWeapon(void);
		
		AWeapon			&operator=(const AWeapon &rhs);
		
		std::string		getName(void) const;
		int				getAPCost(void) const;
		int				getDamage(void) const;
		virtual void	attack(void) const = 0;

	protected:
		int				_damage;
		int				_apcost;
		std::string		_name;
};

#endif