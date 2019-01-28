#include "Squad.hpp"

Squad::Squad(void)
{
	this->_nbr_units = 0;
	this->_squad = NULL;
}

Squad::Squad(const Squad &src)
{
	this->_copyUnits(src);
	this->_nbr_units =src._nbr_units;
}

Squad::~Squad(void)
{
	this->_destroyUnits();
}

Squad   &Squad::operator=(const Squad &rhs)
{
	if (this != &rhs)
	{
		this->_destroyUnits();
		this->_copyUnits(rhs);
		this->_nbr_units = rhs._nbr_units;
	}
	return (*this);
}

int				Squad::push(ISpaceMarine *marine)
{
	t_box *tmp;
	tmp = this->_squad;
	if (marine && this->_unitAlreadyIn(marine, tmp) == false)
	{
		tmp = this->_squad;
		if (this->_squad)
		{
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new t_box;
			tmp->next->unit = marine;
			tmp->next->next = NULL;
		}
		else
		{
			this->_squad = new t_box;
			this->_squad->unit = marine;
			this->_squad->next = NULL;
		}
		this->_nbr_units++;
	}
	return (this->_nbr_units);
}

int				Squad::getCount(void) const
{
	return (this->_nbr_units);
}

ISpaceMarine	*Squad::getUnit(int n) const
{
	t_box	*tmp;

	tmp = this->_squad;
	if (n < 0 || n >= this->_nbr_units)
		return (NULL);
	while (n)
	{
		n--;
		tmp = tmp->next;
	}
	return (tmp->unit);
}

void			Squad::_copyUnits(const Squad &src)
{
	int i = 0;

	while (i < src.getCount())
	{
		push(src.getUnit(i));
		i++;
	}
}

void			Squad::_destroyUnits(void)
{
	t_box	*tmp;

	if (this->_squad)
	{
		delete this->_squad->unit;
		tmp = this->_squad;
		this->_squad = this->_squad->next;
		delete tmp;
		return (this->_destroyUnits());
	}
}

bool			Squad::_unitAlreadyIn(ISpaceMarine *marine, t_box *squad)
{
	while (squad)
	{
		if (marine == squad->unit)
			return (true);
		squad = squad->next;
	}
	return (false);
}