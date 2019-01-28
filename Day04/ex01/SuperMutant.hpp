#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class	SuperMutant : public Enemy
{
	public:
		SuperMutant(void);
		SuperMutant(SuperMutant const & src);
		~SuperMutant(void);
		SuperMutant	&operator=(SuperMutant const &rhs);

		virtual void	takeDamage(int dmg);

};

#endif