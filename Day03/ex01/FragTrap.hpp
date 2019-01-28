#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);

		FragTrap&	operator=(FragTrap const & rhs);

		void		rangedAttack(std::string const & target);
		void		meleeAttack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		void		call_privite_fun(std::string const & target);

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

	private:
		void		vaulthunter_dot_exe(std::string const & target);
};

#endif