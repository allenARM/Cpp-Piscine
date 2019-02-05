#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void){}

Bureaucrat::Bureaucrat(std::string const name, int grade)
{
	this->_name = name;
	
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}
Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
}

Bureaucrat::~Bureaucrat(void){}

Bureaucrat::GradeTooLowException::GradeTooLowException(void){}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &src)
{
    *this = src;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw(){}

Bureaucrat::GradeTooLowException
&Bureaucrat::GradeTooLowException::operator= (const GradeTooLowException &rhs)
{
    static_cast <void> (rhs);
    return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low...");
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void){}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &src)
{
    *this = src;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw(){}

Bureaucrat::GradeTooHighException
&Bureaucrat::GradeTooHighException::operator= (const GradeTooHighException &rhs)
{
    static_cast <void> (rhs);
    return (*this);
}

const char
*Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high...");
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs._grade;
		this->_name = rhs._name;
	}
	return (*this);
}

std::string	Bureaucrat::getName(void)
{
	return (this->_name);
}

int			Bureaucrat::getGrade(void)
{
	return (this->_grade);
}

void		Bureaucrat::setName(std::string name)
{
	this->_name = name;
}

void		Bureaucrat::setGrade(int grade)
{
	this->_grade = grade;
}

void		Bureaucrat::operator+=(int i)
{
	if ((this->_grade + i) > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += i;
}

void		Bureaucrat::operator-=(int i)
{
	if ((this->_grade - i) < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= i;
}

std::ostream                    &operator<< (std::ostream &out, Bureaucrat &rhs)
{
	return (out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade());
}