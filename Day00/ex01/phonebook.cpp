#include "Contact.class.hpp"

void	menu(void)
{
	std::cout << "Phonebook by Allen" << std::endl;
	std::cout << "Avalible commands:" << std::endl;
	std::cout << "-ADD" << std::endl << "-SEARCH" << std::endl << "-EXIT" << std::endl;
	std::cout << "------------------" << std::endl;
}

int main(void)
{
	char	buf[512];
	int		i;
	Contact	contacts[8];

	i = 0;
	menu();
	while (1)
	{
		std::cout << "Write a command, please: ";
		std::cin >> buf;
		if (!strcmp(buf, "EXIT"))
			return (0);
		else if (!strcmp(buf, "ADD"))
		{
			if (i >= 8)
			{
				std::cout << "Phonebook is FULL BABY" << std::endl;
				continue ;
			}
			contacts[i] = add_contact();
			i++;
		}
		else if (!strcmp(buf, "SEARCH"))
			display_contact(contacts, i);
	}
	return (0);
}