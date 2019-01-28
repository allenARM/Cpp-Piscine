#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class Pony
{
	public:
		Pony(void);
		~Pony(void);

		std::string	getage(void);
		std::string	getname(void);
		std::string	getcolor(void);

		void		setage(void);
		void		setname(void);
		void		setcolor(void);

	private:
		std::string	_age;
		std::string	_name;
		std::string	_color;
};

#endif