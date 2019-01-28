#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void){}

SuperTrap::SuperTrap(std::string name)
{
	std::cout << "new hero born baby *funny reference*" << std::endl;
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 120;
	this->_max_energy_points = 120;
	this->_level = 1;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	this->_name = name;
}

SuperTrap::SuperTrap(SuperTrap const & src)
{
	*this = src;
}

SuperTrap&	SuperTrap::operator=(SuperTrap const & rhs)
{
	if (this != &rhs)
	{
		this->_hit_points = rhs._hit_points;
		this->_max_hit_points = rhs._max_hit_points;
		this->_energy_points = rhs._energy_points;
		this->_max_energy_points = rhs._max_energy_points;
		this->_level = rhs._level;
		this->_melee_attack_damage = rhs._melee_attack_damage;
		this->_ranged_attack_damage = rhs._ranged_attack_damage;
		this->_armor_damage_reduction = rhs._armor_damage_reduction;
		this->_name = rhs._name;
	}
	return (*this);
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "SuperTrap class ended" << std::endl;
}