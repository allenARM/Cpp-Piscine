#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class	Brain
{
	public:
		Brain(void);
		~Brain(void);
		std::string	identify(void);
		void		setAddress(void);
	private:
		std::string	_address;
};

#endif