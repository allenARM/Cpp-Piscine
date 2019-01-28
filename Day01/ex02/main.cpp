#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	randomChump(void)
{
	Zombie	anonym_zombie;

    char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',  
                          'o', 'p', 'q', 'r', 's', 't', 'u', 
                          'v', 'w', 'x', 'y', 'z' }; 
  
    std::string str = ""; 
    for (int i = 0; i < 8; i++)  
        str = str + alphabet[rand() % 26]; 
	
	anonym_zombie.setname(str);
	anonym_zombie.settype("regular");
	anonym_zombie.announce();
}

int main()
{
	ZombieEvent kek; //initialazing class event
	Zombie *zombya; //initialazing zomie class object without allocation

	Zombie zombita;
	zombita.setname("Gherta");
	kek.setZombieType(&zombita);

	std::cout << "-------------------------------" << std::endl;
	std::cout << "CREATING 3 RANDOM NAMED ZOMBIES" << std::endl;
	randomChump();
	randomChump();
	randomChump();
	std::cout << "ENDED 3 RANDOM NAMED ZOMBIES" << std::endl;
	std::cout << "-------------------------------" << std::endl;


	zombya = kek.newZombie("SIKLO"); // creating zombie thourght even class
	zombya->announce();
	zombita.announce();
	delete zombya;
	return (0);
}