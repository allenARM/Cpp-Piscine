#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <string>

class	Victim
{
	public:
		Victim(void);
		Victim(std::string name);
		Victim(Victim const &src);
		~Victim(void);

		Victim& operator=(Victim const &rhs);

		std::string	getname(void) const;
		void		getPolymorphed(void) const;

	protected:
		std::string	_name;

};

std::ostream            &operator<<(std::ostream &out, Victim const &in);

#endif