#include "Contact.class.hpp"

void	Contact::setFN(std::string str)
{
	this->_firstName = str;
}

void	Contact::setLN(std::string str)
{
	this->_lastName = str;
}

void	Contact::setNN(std::string str)
{
	this->_nickname = str;
}

void	Contact::setLogin(std::string str)
{
	this->_login = str;
}

void	Contact::setPAddress(std::string str)
{
	this->_postalAddress = str;
}

void	Contact::setEAddress(std::string str)
{
	this->_emailAdress = str;
}

void	Contact::setPN(std::string str)
{
	this->_phoneNumber = str;
}

void	Contact::setBD(std::string str)
{
	this->_birthdayDate = str;
}

void	Contact::setFMEal(std::string str)
{
	this->_favoriteMeal = str;
}

void	Contact::setUWC(std::string str)
{
	this->_underwearColor = str;
}

void	Contact::setDS(std::string str)
{
	this->_darkestSecret = str;
}

std::string		Contact::getFN(void)
{
	return (this->_firstName);
}

std::string		Contact::getLN(void)
{
	return (this->_lastName);
}

std::string		Contact::getNN(void)
{
	return (this->_nickname);
}

std::string		Contact::getLogin(void)
{
	return (this->_login);
}

std::string		Contact::getPAddress(void)
{
	return (this->_postalAddress);
}

std::string		Contact::getEAddress(void)
{
	return (this->_emailAdress);
}

std::string		Contact::getPN(void)
{
	return (this->_phoneNumber);
}

std::string		Contact::getBD(void)
{
	return (this->_birthdayDate);
}

std::string		Contact::getFMeal(void)
{
	return (this->_favoriteMeal);
}

std::string		Contact::getUWC(void)
{
	return (this->_underwearColor);
}

std::string		Contact::getDS(void)
{
	return (this->_darkestSecret);
}