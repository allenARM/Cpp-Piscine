#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine() {}
	
		virtual void battleCry() const = 0;
		virtual void rangedAttack() const = 0;
		virtual void meleeAttack() const = 0;

		virtual ISpaceMarine* clone(void) const = 0;
};

#endif