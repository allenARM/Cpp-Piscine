#include "Array.hpp"

int main()
{
	Array <int> kek(8);

	int i = 0;
	while (i < 8)
	{
		kek[i] = i + 1;
		i++;
	}
	i = 0;
	while (i < 8)
		std::cout << kek[i++];
	std::cout << std::endl;

	std::cout << "-------------" << std::endl;

	Array <char> lol(8);
	i = 0;
	while (i < 7)
	{
		lol[i] = 'a' + i;
		i++;
	}
	lol[i] = '\0';
	
	i = 0;
	while (i < 7)
		std::cout << lol[i++];
	std::cout << std::endl;
}