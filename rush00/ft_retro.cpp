#include "player.hpp"
#include "Enemy.hpp"

static Enemy*	createarmy(WINDOW *win, Enemy *en, int xMax)
{
	int i = 0;
	
	while (i < xMax - 4)
	{
		en[i].start(win, i + 2);
		i++;
	}
	return (en);
}

static void	movedownenemies(Enemy *en, int xMax, Player & p)
{
	int i = 0;

	while (i < (xMax - 1))
	{
		en[i].movedown(p);
		i++;
	}
}

int main()
{
	initscr();
	noecho();
	cbreak();

	int yMax;
	int xMax;
	int	winXmax;
	Enemy	*en;

	getmaxyx(stdscr, yMax, xMax);

	WINDOW * win = newwin(20, 50, (yMax/2) - 10, 10);
	box(win, 0, 0);
	winXmax = getmaxx(win);
	en = new Enemy[winXmax -1];
	refresh();
	wrefresh(win);

	Player	*p = new Player(win, 2, '@');
	en = createarmy(win, en, winXmax);

	do {
		p->display();
		movedownenemies(en, winXmax, *p);
		wrefresh(win);
	} while(p->getmv()!= 'q');

	endwin();
	return(0);
}
