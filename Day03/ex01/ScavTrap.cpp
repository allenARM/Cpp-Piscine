#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "new Scav born baby *funny reference*" << std::endl;
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 50;
	this->_max_energy_points = 50;
	this->_level = 1;
	this->_melee_attack_damage = 20;
	this->_ranged_attack_damage = 15;
	this->_armor_damage_reduction = 3;
	this->_name = name;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap class ended" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & rhs)
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

void		ScavTrap::call_privite_fun(std::string const & target)
{
	challengeNewcomer(target);
}

void		ScavTrap::challengeNewcomer(std::string const & target)
{
	if (this->_energy_points < 25)
		std::cout << "Not enough energy. You energy: " << this->_energy_points << std::endl;
	else
	{
		this->_energy_points -= 25;
		int funny = rand() % 5 + 1;

		if (funny == 1)
			std::cout << target << " IS KEKER!!!" << std::endl;
		else if (funny == 2)
			std::cout << target << " spiled beer on you, kek." << std::endl;
		else if (funny == 3)
			std::cout << "You tried to challende " << target << std::endl;
		else if (funny == 4)
			std::cout << target << " accepted your challenge" << std::endl;
		else
			std::cout << "Well, you own " << target << " free beer" << std::endl;
	}
}
