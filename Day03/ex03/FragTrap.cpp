#include "FragTrap.hpp"

FragTrap::FragTrap(void){}

FragTrap::FragTrap(std::string name)
{
	std::cout << "new hero born baby *funny reference*" << std::endl;
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 100;
	this->_max_energy_points = 100;
	this->_level = 1;
	this->_melee_attack_damage = 30;
	this->_ranged_attack_damage = 20;
	this->_armor_damage_reduction = 5;
	this->_name = name;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
}

FragTrap&	FragTrap::operator=(FragTrap const & rhs)
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

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap class ended" << std::endl;
}

void		FragTrap::call_privite_fun(std::string const & target)
{
	vaulthunter_dot_exe(target);
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->_energy_points < 25)
		std::cout << "Not enough energy. You energy: " << this->_energy_points << std::endl;
	else
	{
		this->_energy_points -= 25;
		int funny = rand() % 5 + 1;

		if (funny == 1)
			std::cout << "You have tried to bite " << target << " ,unfortunately 0 damage given." << std::endl;
		else if (funny == 2)
			std::cout << "You freezed " << target << ", but he is from Russia, 0 damage given." << std::endl;
		else if (funny == 3)
			std::cout << "You tried to explode " << target << ", but you dont have a lighter, 0 damage given." << std::endl;
		else if (funny == 4)
			std::cout << "No, not even now, 0 damage diven." << std::endl;
		else
			std::cout << "Well, you have tried to scare " << target << ", but instead he scared you. You got a hurt attack. lol." << std::endl;
	}
}
