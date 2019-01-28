#include "ZombieHorde.hpp"

std::string	generateSTR(void)
{
    char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',  
                          'o', 'p', 'q', 'r', 's', 't', 'u', 
                          'v', 'w', 'x', 'y', 'z' }; 
  
    std::string str = ""; 
    for (int i = 0; i < 8; i++)  
        str = str + alphabet[rand() % 26]; 
	
	return (str);
}


int main()
{
	ZombieHorde kek(10);
    kek.announce();
	return (0);
}