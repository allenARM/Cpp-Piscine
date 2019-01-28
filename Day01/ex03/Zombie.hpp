#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);

		void	setname(std::string str);
		void	settype(std::string str);

		void	announce(void);
	private:
		std::string	_name;
		std::string	_type;
};

std::string	generateSTR(void);

#endif