#include "Form.hpp"

int main()
{
	Bureaucrat	lox("Petya", 5);
	Bureaucrat	lox1("Ivan", 20);

	Form		veryimpotant("EXAM", 5, 10);

	std::cout << lox << std::endl;
	std::cout << lox1 << std::endl;

	std::cout << veryimpotant << std::endl;

	std::cout << "Ivan is trying to sign the form..." << std::endl;
	try
	{
		veryimpotant.beSigned(lox1);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << veryimpotant <<std::endl;
	std::cout << "Petya is trying to sign the form..." << std::endl;
	try
	{
		veryimpotant.beSigned(lox);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << veryimpotant <<std::endl;
}