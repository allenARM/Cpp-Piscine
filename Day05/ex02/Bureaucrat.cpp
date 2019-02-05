#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void)
{
    this->_name = "noname";
    this->_grade = 1;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    *this = src;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
    if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else
    {
      this->_name = name;
      this->_grade = grade;
    }
}

Bureaucrat::~Bureaucrat(void){}

Bureaucrat
&Bureaucrat::operator= (const Bureaucrat &rhs)
{
    if (this != &rhs)
    {
        this->_name  = rhs._name;
        this->_grade = rhs._grade;
    }
    return (*this);
}

Bureaucrat::
GradeTooLowException::GradeTooLowException(void){}

Bureaucrat::
GradeTooLowException::GradeTooLowException(const GradeTooLowException &src)
{
    *this = src;
}

Bureaucrat::
GradeTooLowException::~GradeTooLowException(void) throw()
{
}

Bureaucrat::GradeTooLowException
&Bureaucrat::GradeTooLowException::operator= (const GradeTooLowException &rhs)
{
    (void)rhs;
    return (*this);
}

const char
*Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return ("Grade is too low...");
}

Bureaucrat::
GradeTooHighException::GradeTooHighException(void){}

Bureaucrat::
GradeTooHighException::GradeTooHighException(const GradeTooHighException &src)
{
    *this = src;
}

Bureaucrat::
GradeTooHighException::~GradeTooHighException(void) throw(){}

Bureaucrat::GradeTooHighException
&Bureaucrat::GradeTooHighException::operator= (const GradeTooHighException &rhs)
{
    (void)rhs;
    return (*this);
}

const char
*Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return ("Grade is too high...");
}

void
Bureaucrat::setName(std::string name)
{
    this->_name = name;
}

void
Bureaucrat::setGrade(int grade)
{
    if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else
    {
        this->_grade = grade;
    }
    return ;
}

void
Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signs " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->_name << " cannot sign " << form.getName() \
                  << " because " << e.what() << std::endl;
    }
}

void
Bureaucrat::execForm(const Form &form)
{
    try
    {
        form.execute(*this);
        std::cout << this->_name << " executes " \
                  << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->_name << " has failed to execute " \
                  << form.getName() << " becuase " << e.what() << std::endl;
    }
}

void
Bureaucrat::incrementGrade(void)
{
    if (this->_grade <= 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else
    {
        this->_grade -= 1;
    }
}

void
Bureaucrat::decrementGrade(void)
{
    if (this->_grade >= 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    else
    {
        this->_grade += 1;
    }
}

std::string
Bureaucrat::getName(void) const
{
    return (this->_name);
}

int
Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

std::ostream
&operator<< (std::ostream &out, const Bureaucrat &rhs)
{
    out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() \
        << std::endl;
    return (out);
}