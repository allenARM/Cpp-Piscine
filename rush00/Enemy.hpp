#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <ncurses.h>
#include <string>
#include "player.hpp"

class Enemy
{
	public:
		Enemy(void);
		Enemy(Enemy const &src);
		~Enemy();

		Enemy	&operator=(Enemy const &rhs);

		void	start(WINDOW *win, int beg);
		void	display(Player & p);
		bool	getdead(void);
		void	setdead(bool set);
		int		getCX(void);
		int		getCY(void);
		void	setCY(void);
		void	movedown(Player & p);
		WINDOW	*getwindow() const;

	private:
		bool	dead;
		int		cX;
		int		cY;
		int		maxY;
		WINDOW	*win;
};

#endif
