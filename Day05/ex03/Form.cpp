#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void)
{
	this->_signed = false;
    this->_grade_to_sign = 1;
    this->_grade_to_execute = 1;
    this->_name = "noname";
    this->_target = "noname";
}

Form::Form(const Form &src)
{
    *this = src;
}


Form::Form(std::string target, std::string name, int grade_to_sign, int grade_to_execute)
{
    this->_signed = false;
    this->_grade_to_sign = grade_to_sign;
    this->_grade_to_execute = grade_to_execute;
    this->_name = name;
    this->_target = target;

    if (this->_grade_to_sign < 1 || this->_grade_to_execute < 1)
    {
        throw Form::GradeTooHighException();
    }
    else if (this->_grade_to_sign > 150 || this->_grade_to_execute > 150)
    {
        throw Form::GradeTooLowException();
    }
}

Form::~Form(void){}

Form
&Form::operator= (const Form &rhs)
{
    if (this != &rhs)
    {
        this->_signed = rhs._signed;
    }
    return (*this);
}

Form::GradeTooHighException::GradeTooHighException(void){}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &src)
{
    *this = src;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw(){}

Form::GradeTooHighException&Form::GradeTooHighException::operator= (const GradeTooHighException &rhs)
{
    static_cast <void> (rhs);
    return (*this);
}

const char*Form::GradeTooHighException::what(void) const throw()
{
    return ("Grade is too high...");
}

Form::GradeTooLowException::GradeTooLowException(void){}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &src)
{
    *this = src;
}

Form::
GradeTooLowException::~GradeTooLowException(void) throw(){}

Form::GradeTooLowException
&Form::GradeTooLowException::operator= (const GradeTooLowException &rhs)
{
    static_cast <void> (rhs);
    return (*this);
}

const char
*Form::GradeTooLowException::what(void) const throw()
{
    return ("Grade is too low...");
}

Form::NotSignedException::NotSignedException(void){}

Form::NotSignedException::NotSignedException(const NotSignedException& src)
{
    *this = src;
}

Form::NotSignedException::~NotSignedException(void) throw(){}

Form::NotSignedException&Form::NotSignedException::operator= (const NotSignedException &rhs)
{
    static_cast <void> (rhs);
    return (*this);
}

const char*
Form::NotSignedException::what(void) const throw()
{
    return ("Form not signed, yet");
}

void
Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_grade_to_sign)
    {
        throw Form::GradeTooLowException();
    }
    else
    {
        this->_signed = true;
    }
}

void
Form::setTarget(std::string target)
{
    this->_target = target;
}

bool
Form::getSigned(void) const
{
    return (this->_signed);
}

int
Form::getGradeToSign(void) const
{
    return (this->_grade_to_sign);
}

int
Form::getGradeToExecute(void) const
{
    return (this->_grade_to_execute);
}

std::string Form::getName(void) const
{
    return (this->_name);
}

std::string Form::getTarget(void) const
{
    return (this->_target);
}

void Form::execute(const Bureaucrat& executor) const
{
    if (executor.getGrade() > _grade_to_execute)
    {
        throw Form::GradeTooLowException();
    }
    else if (!_signed) 
    {
        throw Form::NotSignedException();
    }
}

std::ostream &operator<< (std::ostream &out, const Form &rhs)
{
    out << "The form: " << rhs.getName() << " which is " \
        << (rhs.getSigned() ? "" : "not ") \
        << " signed, which requires a grade " << rhs.getGradeToSign() \
        << " to sign, and " << rhs.getGradeToExecute() << " to be executed." \
        << std::endl;
    return (out);
}