#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void){}

ClapTrap::ClapTrap(std::string name)
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

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & rhs)
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

ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name << " died, lol *funny reference*" << std::endl;
}

void		ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << this->_name << " attacks " << target << " at range, caousing "\
	<< this->_ranged_attack_damage << " point of damage !" << std::endl;
}

void		ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << this->_name << " attacks " << target << " at melee, caousing "\
	<< this->_melee_attack_damage << " point of damage !" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	int tmp = (int)amount;
	if (tmp > this->_hit_points)
	{
		std::cout << "you are dying" << std::endl;
		this->_hit_points = 0;
		return ;
	}
	std::cout << "oh, I got " << (tmp - this->_armor_damage_reduction) << " damage. I. NEED. HEALING." << std::endl;
	this->_hit_points -= tmp;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "I have a plan! I. GOT. HEALING. " << amount << std::endl;

	int tmp = (int)amount;
	if ((this->_energy_points + tmp) > this->_max_energy_points)
		this->_energy_points = this->_max_energy_points;
	else
		this->_energy_points += tmp;

	if ((this->_hit_points + tmp) > this->_max_hit_points)
		this->_hit_points = this->_max_hit_points;
	else
		this->_hit_points += tmp;
}