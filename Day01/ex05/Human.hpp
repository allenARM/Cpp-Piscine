#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human
{
	public:
		Brain		getBrain(void);
		std::string	identify(void);
	private:
		Brain	_brain;
};

#endif