#include "Contact.class.hpp"

Contact	add_contact(void)
{
	Contact new_contact;
	std::string	buf;

	std::cout << std::endl << "Begining adding a new contact..." << std::endl << std::endl;

	std::cout << "Enter first name: ";
	std::cin >> buf;
	new_contact.setFN(buf);

	std::cout << "Enter last name: ";
	std::cin >> buf;
	new_contact.setLN(buf);

	std::cout << "Enter nickname: ";
	std::cin >> buf;
	new_contact.setNN(buf);

	std::cout << "Enter login: ";
	std::cin >> buf;
	new_contact.setLogin(buf);

	std::cout << "Enter postal address: ";
	std::cin >> buf;
	new_contact.setPAddress(buf);

	std::cout << "Enter email address: ";
	std::cin >> buf;
	new_contact.setEAddress(buf);

	std::cout << "Enter phone number: ";
	std::cin >> buf;
	new_contact.setPN(buf);

	std::cout << "Enter birthday date: ";
	std::cin >> buf;
	new_contact.setBD(buf);

	std::cout << "Enter favorite meal: ";
	std::cin >> buf;
	new_contact.setFMEal(buf);

	std::cout << "Enter underwear color: ";
	std::cin >> buf;
	new_contact.setUWC(buf);

	std::cout << "Enter darketst secret: ";
	std::cin >> buf;
	new_contact.setDS(buf);

	std::cout << std::endl << "-----------------------" << std::endl;
	std::cout << "Adding contact is done!" << std::endl;
	std::cout << "-----------------------" << std::endl << std::endl;
	return (new_contact);
}
