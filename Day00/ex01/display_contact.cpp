#include "Contact.class.hpp"

static std::string
truncateContact(std::string field)
{
    field = field.erase((10 - 1), \
    field.length() - (10 - 1));
    field.append(".");
    return (field);
}

void	display_contact(Contact *contacts, int max)
{
	int	i;
	std::string     first_name;
    std::string     last_name;
    std::string     nickname;

	i = 0;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	while(i < max)
	{
		first_name = contacts[i].getFN();
        last_name = contacts[i].getLN();
        nickname = contacts[i].getNN();

        std::cout << "|" << std::setw(10) << i + 1;
        first_name = (first_name.length() > 10) ? \
            truncateContact(first_name) : first_name;
        std::cout << "|" << std::setw(10) << first_name;

        last_name = (last_name.length() > 10) ? \
            truncateContact(last_name) : last_name;
        std::cout << "|" << std::setw(10) << last_name;

        nickname = (nickname.length() > 10) ? \
            truncateContact(nickname) : nickname;
        std::cout << "|" << std::setw(10) << nickname;
        std::cout << "|" << std::endl;
		i++;
	}
	display_all_info(contacts, max);
}

void	display_all_info(Contact *contact, int max)
{
	int buf;
	std::cout << "Choose contact by index: ";
	std::cin >> buf;
	if (std::cin.good() && buf > 0 && buf <= max)
	{
		std::cout << std::setw(20) << "First name: " << contact[buf - 1].getFN() << std::endl;
		std::cout << std::setw(20) << "Last name: " << contact[buf - 1].getLN() << std::endl;
		std::cout << std::setw(20) << "Nickname: " << contact[buf - 1].getNN() << std::endl;
		std::cout << std::setw(20) << "Login: " << contact[buf - 1].getLogin() << std::endl;
		std::cout << std::setw(20) << "Postal address: " << contact[buf - 1].getPAddress() << std::endl;
		std::cout << std::setw(20) << "Email address: " << contact[buf - 1].getEAddress() << std::endl;
		std::cout << std::setw(20) << "Phone number: " << contact[buf - 1].getPN() << std::endl;
		std::cout << std::setw(20) << "Birthday date: " << contact[buf - 1].getBD() << std::endl;
		std::cout << std::setw(20) << "Favorite meal: " << contact[buf - 1].getFMeal() << std::endl;
		std::cout << std::setw(20) << "Underwear color: " << contact[buf - 1].getUWC() << std::endl;
		std::cout << std::setw(20) << "Darkest secret: " << contact[buf - 1].getDS();
		std::cout << std::endl;
	}
	else
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Wrong data" << std::endl;
	}
}