#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>
# include <iomanip>

class	Contact
{
	public:
		void	setFN(std::string);
		void	setLN(std::string);
		void	setNN(std::string);
		void	setLogin(std::string);
		void	setPAddress(std::string);
		void	setEAddress(std::string);
		void	setPN(std::string);
		void	setBD(std::string);
		void	setFMEal(std::string);
		void	setUWC(std::string);
		void	setDS(std::string);

		std::string		getFN(void);
		std::string		getLN(void);
		std::string		getNN(void);
		std::string		getLogin(void);
		std::string		getPAddress(void);
		std::string		getEAddress(void);
		std::string		getPN(void);
		std::string		getBD(void);
		std::string		getFMeal(void);
		std::string		getUWC(void);
		std::string		getDS(void);

	private:
		std::string		_firstName;
		std::string		_lastName;
		std::string		_nickname;
		std::string		_login;
		std::string		_postalAddress;
		std::string		_emailAdress;
		std::string		_phoneNumber;
		std::string		_birthdayDate;
		std::string		_favoriteMeal;
		std::string		_underwearColor;
		std::string		_darkestSecret;

};

void	display_all_info(Contact *contact, int max);
void	display_contact(Contact *contacts, int max);
Contact	add_contact(void);

#endif