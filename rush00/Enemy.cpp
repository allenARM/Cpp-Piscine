#include "Enemy.hpp"
#include "ncurses.h"

Enemy::Enemy(void){}

void Enemy::start(WINDOW *win, int beg)
{
	this->win = win;
	this->maxY = getmaxy(this->win);
	this->cX = beg;
	this->cY = 1;
}

Enemy::Enemy(Enemy const &src)
{
	*this = src;
}

Enemy::~Enemy() {}

Enemy	&Enemy::operator=(Enemy const &rhs)
{
	if (this != &rhs)
	{
		this->dead = rhs.dead;
		this->cX = rhs.cX;
		this->cY = rhs.cY;
		this->win = rhs.win;
	}
	return (*this);
}

void	Enemy::display(Player & p)
{
	int i = 0;
	if ( this->cY == p.getY() && this->cX == p.getX())
		exit(1);
	
	if (p.getchecker() == 1)
		while (i < 50000)
		{
			Weapon& tmp = p.getgun(i);
			if (tmp.getdead() == false && (this->cY == tmp.getY() && this->cX == tmp.getX()))
			{
				tmp.setdead(1);
				this->dead = true;
				mvwaddch(this->win, this->cY, this->cX, ' ');
			}
			i++;
		}
		init_pair(3, COLOR_RED, COLOR_BLACK);
		wattron(this->win, COLOR_PAIR(3));
		if (this->cY != this->maxY - 1)
			mvwaddch(this->win, this->cY, this->cX, '$');
		wattroff(this->win, COLOR_PAIR(3));
}

bool	Enemy::getdead(void) { return this->dead; }
void	Enemy::setdead(bool set) { this->dead = set; }
int		Enemy::getCX(void) { return this->cX; }
int		Enemy::getCY(void) { return this->cY; }
void	Enemy::setCY(void) { this->cY = 1;}

void	Enemy::movedown(Player & p)
{
	if (this->dead == true || this->cY == this->maxY - 1)
	{
		this->dead = false;
		this->setCY();
	}
	if (this->cY != 0)
		mvwaddch(this->win, this->cY, this->cX, ' ');
	if (this->dead == false && arc4random_uniform(50) == 1)
		this->cY++;
	if (this->dead == false)
		this->display(p);

	if (this->cY == this->maxY - 1|| wmove(this->win, this->cY + 1, this->cX) == '@')
		mvwaddch(this->win, this->cY - 1, this->cX, ' ');
	else if (wmove(this->win, this->cY + 1, this->cX) == '*')
		mvwaddch(this->win, this->cY, this->cX, ' ');
}

WINDOW *Enemy::getwindow() const{
	return (this->win);
}
