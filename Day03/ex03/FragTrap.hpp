#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);

		FragTrap&	operator=(FragTrap const & rhs);

		void	call_privite_fun(std::string const & target);

	private:
		void	vaulthunter_dot_exe(std::string const & target);
};

#endif