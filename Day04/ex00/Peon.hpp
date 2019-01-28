#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(void);
		Peon(std::string name);
		Peon(Peon const &src);
		~Peon(void);
		
		Peon& operator=(Peon const &rhs);

		virtual void getPolymorphed(void) const;
};

#endif