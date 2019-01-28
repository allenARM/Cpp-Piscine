#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	FragTrap test("debugger");

	test.meleeAttack("Kek1");
	test.rangedAttack("KEK2");
	test.takeDamage(30);
	test.beRepaired(40);

	test.call_privite_fun("bad boy");	

	ScavTrap tester("debugger1");

	tester.meleeAttack("lol");
	tester.rangedAttack("lol1");
	tester.takeDamage(50);
	tester.beRepaired(100);
	tester.call_privite_fun("bad idiot");

	NinjaTrap testerochek("ninja");

	testerochek.meleeAttack("lol");
	testerochek.rangedAttack("lol1");
	testerochek.takeDamage(50);
	testerochek.beRepaired(100);

	testerochek.ninjaShoebox(test);
	testerochek.ninjaShoebox(testerochek);
	testerochek.ninjaShoebox(tester);

	return (0);
}