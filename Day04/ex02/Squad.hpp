#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include <iostream>
# include <string>
# include <cstdlib>

class	Squad : public ISquad
{
	public:
		Squad(void);
		Squad(const Squad &src);

		~Squad(void);

		Squad   &operator=(const Squad &rhs);

		virtual int				push(ISpaceMarine *marine);

		virtual int				getCount(void) const;
		virtual ISpaceMarine	*getUnit(int n) const;

private:
	typedef struct		s_box
	{
		ISpaceMarine	*unit;
		struct s_box	*next;
	}					t_box;

	int					_nbr_units;
	t_box				*_squad;

	void				_copyUnits(const Squad &src);
	void				_destroyUnits(void);
	bool				_unitAlreadyIn(ISpaceMarine *marine, t_box *squad);
};

#endif