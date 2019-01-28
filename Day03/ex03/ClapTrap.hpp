#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);

		ClapTrap&	operator=(ClapTrap const & rhs);


		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		std::string	getName(void);

	protected:
		int			_hit_points;
		int 		_max_hit_points;
		int			_energy_points;
		int			_max_energy_points;
		int			_level;
		int			_melee_attack_damage;
		int			_ranged_attack_damage;
		int			_armor_damage_reduction;
		std::string	_name;
};

#endif