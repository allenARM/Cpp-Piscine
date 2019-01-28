#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void){}

NinjaTrap::NinjaTrap(std::string name)
{
	std::cout << "new hero born baby *funny reference*" << std::endl;
	this->_hit_points = 60;
	this->_max_hit_points = 60;
	this->_energy_points = 120;
	this->_max_energy_points = 120;
	this->_level = 1;
	this->_melee_attack_damage = 60;
	this->_ranged_attack_damage = 5;
	this->_armor_damage_reduction = 0;
	this->_name = name;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src)
{
	*this = src;
}

NinjaTrap&	NinjaTrap::operator=(NinjaTrap const & rhs)
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

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NinjaTrap class ended" << std::endl;
}

void 		NinjaTrap::ninjaShoebox(NinjaTrap &attack)
{
	std::cout << "You have used NINJAAAAATACK on " << attack.getName() << std::endl;
}

void 		NinjaTrap::ninjaShoebox(ClapTrap &attack)
{
	std::cout << "You have used ParetCLAP TRAAAAAAP on " << attack.getName() << ", heh" << std::endl;
}

void 		NinjaTrap::ninjaShoebox(FragTrap &attack)
{
	std::cout << "You have used FRooooooooooogTRAP on " << attack.getName() << ", maybe this is funny enough" << std::endl;
}

void 		NinjaTrap::ninjaShoebox(ScavTrap &attack)
{
	std::cout << "You have used SCAVTRAP on " << attack.getName() << " (btw what is scav?)" << std::endl;
}