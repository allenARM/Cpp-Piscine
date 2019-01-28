#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist(void);
		PowerFist(const PowerFist &src);
		~PowerFist(void);

		PowerFist   &operator=(const PowerFist &rhs);

		virtual void  attack(void) const;
};

#endif