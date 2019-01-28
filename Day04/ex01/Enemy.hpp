#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>
#include <string.h>

class Enemy
{
	public:
		Enemy(void);
		Enemy(Enemy const & src);
		Enemy(int hp, std::string const & type);
		virtual	~Enemy(void);
		std::string const	getType(void) const;
		int					getHP(void) const;

		Enemy	&operator=(Enemy const &rhs);

		virtual void	takeDamage(int dmg);

	protected:
		int			_hp;
		std::string	_type;
};

#endif