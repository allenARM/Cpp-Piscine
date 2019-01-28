#ifndef RADSCORPRION_HPP
# define RADSCORPRION_HPP

#include "Enemy.hpp"

class	RadScorpion : public Enemy
{
	public:
		RadScorpion(void);
		RadScorpion(RadScorpion const & src);
		~RadScorpion(void);
		RadScorpion	&operator=(RadScorpion const &rhs);
};

#endif