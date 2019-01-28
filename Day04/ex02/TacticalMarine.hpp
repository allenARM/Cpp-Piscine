#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include <iostream>
#include "ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine(void);
        TacticalMarine(const TacticalMarine &src);

        ~TacticalMarine(void);

        TacticalMarine			&operator=(const TacticalMarine &rhs);

        virtual void			battleCry(void) const;
        virtual void			meleeAttack(void) const;
        virtual void			rangedAttack(void) const;
        virtual ISpaceMarine	*clone(void) const;
};

#endif