#include "Weapon.hpp"

Weapon::Weapon(std::string str) { this->_type = str; }

Weapon::~Weapon(void){}

const std::string&	Weapon::getType(void) { return (this->_type); }

void				Weapon::setType(std::string str) { this->_type = str; }