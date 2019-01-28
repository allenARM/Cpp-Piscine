#ifndef PLAYER_HPP
# define PLAYER_HPP

#include <ncurses.h>
#include <string>
#include <ctime>

#include "Weapon.hpp"

class Player
{
	public:
		Player(void);
		Player(WINDOW *win, int x, char c);
		Player(Player const & src);
		~Player(void);
		
		Player &operator=(Player const &rhs);

		int		getmv(void);
		void	mvleft(void);
		void	mvright(void);
		void	display(void);
		void	checkgun(void);
		void	try_to_move_up(void);
		int		getX(void);
		int		getY(void);
		int		getchecker(void);
		Weapon& getgun(int i);
	private:
		int		checker;
		int		xLoc;
		int		yLoc;
		int 	xMax;
		int 	yMax;
		char	hero;
		WINDOW	*curwin;
		Weapon	gun[50000];
};

#endif
