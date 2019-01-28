#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const & src);
		~NinjaTrap(void);

		NinjaTrap&	operator=(NinjaTrap const & rhs);

		void 		ninjaShoebox(NinjaTrap &attack);
		void 		ninjaShoebox(ClapTrap &attack);
		void 		ninjaShoebox(FragTrap &attack);
		void 		ninjaShoebox(ScavTrap &attack);
};

#endif