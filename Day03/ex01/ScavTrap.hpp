#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "FragTrap.hpp"

class ScavTrap : public FragTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);
		ScavTrap&	operator=(ScavTrap const & rhs);

		void		call_privite_fun(std::string const & target);

	private:
		void	challengeNewcomer(std::string const & comer);
};

#endif