#include "intern.hpp"

Intern::Intern(void)
{
    _functions[0] = &Intern::_newPresidentialPardonForm;
    _functions[1] = &Intern::_newRobotomyRequestForm;
    _functions[2] = &Intern::_newShrubberyCreationForm;
    return ;
}

Intern::Intern(const Intern &src)
{
    *this = src;
}

Intern::~Intern(void){}

Intern& Intern::operator= (const Intern &rhs)
{
    static_cast <void> (rhs);
    return (*this);
}

std::string Intern::_names[3] = {
    "presidential pardon",
    "robotomy request",
    "shrubbery creation"
};


Form* Intern::makeForm(std::string name, std::string target)
{
    try
    {
        return _searchForm(name, target);
    }
    catch (std::exception &e)
    {
        std::cout << name << " : form not found... :(" << std::endl;
        return NULL;
    }
}

Form* Intern::_searchForm(std::string name, std::string target)
{
	int i = 0;
	while (i < 3)
    {
	    if (name == this->_names[i])
            return (this->*_functions[i])(target);
		i++;
	}
    std::cout << "Form not found" << std::endl;
    return (NULL);
}

Form* Intern::_newPresidentialPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

Form* Intern::_newRobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form* Intern::_newShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}