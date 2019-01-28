#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <ncurses.h>
#include <string>

class Weapon
{
	public:
		Weapon(void);
		Weapon(Weapon const &src);
		~Weapon();

		Weapon	&operator=(Weapon const &rhs);
		int		getX(void);
		int		getY(void);
		bool	getdead(void);
		void	setdead(int i);
		void	start(WINDOW *win, int x);
		void	moveup();
		void	display();
	private:
		bool	dead;
		int		counter;
		int		x;
		int		y;
		int		maxY;
		WINDOW	*win;
};

#endif
