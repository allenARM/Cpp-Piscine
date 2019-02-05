#include "Form.hpp"

Form::Form(void)
{
	this->_signed = false;
	this->_name = "noname";
	this->_requiredGradeToExecute = 1;
	this->_requiredGradeToSign = 1;
}

Form::Form(std::string name, int gradeToSign, int gradetoExec)
{
	this->_name = name;
	this->_signed = false;
	this->_requiredGradeToSign = gradeToSign;
	this->_requiredGradeToExecute = gradetoExec;
}

Form::Form(Form const &src)
{
	*this = src;
}

Form::~Form(void){}

std::string	Form::getName(void)
{
	return (this->_name);
}

bool		Form::getSigned(void)
{
	return (this->_signed);
}

int			Form::getGradeToSign(void)
{
	return (this->_requiredGradeToSign);
}

int			Form::getGradeToExec(void)
{
	return (this->_requiredGradeToExecute);
}

Form&		Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		this->_signed = rhs._signed;
		this->_name = rhs._name;
		this->_requiredGradeToExecute = rhs._requiredGradeToExecute;
		this->_requiredGradeToSign = rhs._requiredGradeToSign;
	}
	return (*this);
}

std::ostream                  &operator<< (std::ostream &out, Form &rhs)
{
	out << "Form " << rhs.getName() << " is ";
	if (rhs.getSigned() == true)
		out << "signed";
	else
		out << "not signed";
	out << " required grade to sign " << rhs.getGradeToSign() << " and required grade to exec " << rhs.getGradeToExec();
	return (out);
}

Form::GradeTooHighException::GradeTooHighException(void){}
Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &src)
{
	*this = src;
}
Form::GradeTooHighException::~GradeTooHighException(void) throw(){}
Form::GradeTooHighException& Form::GradeTooHighException::operator=(const GradeTooHighException &rhs)
{
	static_cast <void> (rhs);
	return *this;
}

const	char*Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high...");
}

Form::GradeTooLowException::GradeTooLowException(void){}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &src)
{
	*this = src;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw(){}

Form::GradeTooLowException&Form::GradeTooLowException::operator=(const GradeTooLowException &rhs)
{
	static_cast <void> (rhs);
	return *this;
}

const char*Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low...");
}

void		Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > this->_requiredGradeToSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}