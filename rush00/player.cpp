#include "player.hpp"

Player::Player(){}

Player::Player(WINDOW *win, int x, char c)
{	
	this->curwin = win;
	getmaxyx(this->curwin, this->yMax, this->xMax);

	this->xLoc = x;
	this->yLoc = this->yMax - 2;
	keypad(this->curwin, true);
	this->hero = c;
	this->checker = 1;
}

Player::Player(Player const & src)
{
	*this = src;
}

Player::~Player(void){}

Player &Player::operator=(Player const &rhs)
{
	if (this != &rhs)
	{
		this->checker = rhs.checker;
		this->xLoc = rhs.xLoc;
		this->xMax = rhs.xMax;
		this->yLoc = rhs.yLoc;
		this->yMax = rhs.yMax;
		this->hero = rhs.hero;
		this->curwin = rhs.curwin;
		for (int i = 0; i < 50000; i++)
			this->gun[i] = rhs.gun[i];		
	}
	return (*this);
}

int		Player::getmv(void)
{
	nodelay(curwin, TRUE);
	int ch = wgetch(curwin);
	if (ch == KEY_LEFT)
		mvleft();
	else if (ch == KEY_RIGHT)
		mvright();
	else if (ch == ' ')
		checkgun();
	try_to_move_up();
	return (ch);
}

void	Player::checkgun(void)
{
	static int i = 0;
	if (i <= 50000)
	{
		gun[i].start(this->curwin, this->xLoc);
		i++;
	}
}

void	Player::try_to_move_up(void)
{
	int i = 0;
	while (i <= 50000)
	{
		gun[i].moveup();
		i++;
	}
}

void	Player::mvleft(void)
{
	mvwaddch(this->curwin, this->yLoc, this->xLoc, ' ');
	this->xLoc--;
	if (this->xLoc <= 1)
		this->xLoc = 2;
}

void	Player::mvright(void)
{
	mvwaddch(this->curwin, this->yLoc, this->xLoc, ' ');	
	this->xLoc++;
	if (this->xLoc > this->xMax - 3)
		this->xLoc = this->xMax - 3;
}

void	Player::display(void)
{
	start_color();

	init_pair(2, COLOR_CYAN, COLOR_BLACK);

	wattron(this->curwin, COLOR_PAIR(2));
	mvwaddch(this->curwin, this->yLoc, this->xLoc, this->hero);
	wattroff(this->curwin, COLOR_PAIR(2));
}

int		Player::getX(void) {return this->xLoc;}
int		Player::getY(void) {return this->yLoc;}
int		Player::getchecker(void) {return this->checker;}
Weapon& Player::getgun(int i) {return gun[i];}
