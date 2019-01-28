#ifndef ASSAULTERMINATOR_HPP
# define ASSAULTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class	AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(void);
        AssaultTerminator(const AssaultTerminator &src);

        ~AssaultTerminator(void);

        AssaultTerminator			&operator=(const AssaultTerminator &rhs);

        virtual void			battleCry(void) const;
        virtual void			meleeAttack(void) const;
        virtual void			rangedAttack(void) const;
        virtual ISpaceMarine	*clone(void) const;
};

#endif