#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer(void);
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const& src);
		~Sorcerer(void);

		Sorcerer& operator=(Sorcerer const& rhs);

		std::string	getname(void) const;
		std::string	gettitle(void) const;

		void polymorph(Victim const &vic) const;
	private:
		std::string	_name;
		std::string	_title;
};

std::ostream            &operator<<(std::ostream &out, Sorcerer const &in);

#endif