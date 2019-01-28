#include "FragTrap.hpp"

int main()
{
	FragTrap test("debugger");

	test.meleeAttack("Kek1");
	test.rangedAttack("KEK2");
	test.takeDamage(30);
	test.beRepaired(40);

	test.vaulthunter_dot_exe("bad boy");	

	return (0);
}