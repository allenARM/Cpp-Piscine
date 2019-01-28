#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle(void);
		PlasmaRifle(const PlasmaRifle &src);
		~PlasmaRifle(void);

		PlasmaRifle   &operator=(const PlasmaRifle &rhs);

		virtual void  attack(void) const;
};

#endif