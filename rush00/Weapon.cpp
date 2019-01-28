#include "Weapon.hpp"

Weapon::Weapon(void)
{
	this->counter = 0;
}

Weapon::Weapon(Weapon const &src)
{
	*this = src;
}

Weapon::~Weapon(){}

Weapon	&Weapon::operator=(Weapon const &rhs)
{
	if (this != &rhs)
	{
		this->dead = rhs.dead;
		this->x = rhs.x;
		this->y = rhs.y;
		this->win = rhs.win;
		this->maxY = rhs.maxY;
		this->counter = rhs.counter;
	}
	return (*this);
}

void	Weapon::start(WINDOW *win, int x)
{
	this->win = win;
	this->maxY = getmaxy(win);
	this->y = this->maxY - 3;
	this->dead = false;
	this->x = x;
}

int		Weapon::getX(void) { return (this->x); }
int		Weapon::getY(void) { return (this->y); }
bool	Weapon::getdead(void) { return this->dead;}
void	Weapon::setdead(int i) { if (i == 1) this->dead = true;}

void	Weapon::moveup()
{
	if (this->y != 0)
		mvwaddch(this->win, this->y, this->x, ' ');
	if (this->counter == 4)
	{
		this->y--;
		this->counter = 0;
	}
	else
		this->counter++;
	if (this->y != 2)
		this->display();
	if (this->y == 1)
	{
		mvwaddch(this->win, this->y, this->x, ' ');
		this->y++;
		mvwaddch(this->win, this->y, this->x, ' ');
	}
}

void	Weapon::display()
{
	init_pair(4, COLOR_GREEN, COLOR_BLACK);
		wattron(this->win, COLOR_PAIR(4));
	if (this->dead == false)
		mvwaddch(this->win, this->y, this->x, '*');
	wattroff(this->win, COLOR_PAIR(4));
}
