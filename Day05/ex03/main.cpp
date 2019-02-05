#include <iostream>
#include <stdexcept>

#include "Form.hpp"
#include "intern.hpp"
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int
main(void)
{
    Form *f1;
    Form *f2;
    Form *f3;
    Form *f4;
    Intern i1;
    Bureaucrat b1 = Bureaucrat("keker", 41);

    f1 = i1.makeForm("robotomy request", "loler");
    f2 = i1.makeForm("presidential pardon", "loler");
    f3 = i1.makeForm("shrubbery creation", "loler");
    std::cout << *f1 << std::endl;
    std::cout << *f2 << std::endl;
    std::cout << *f3 << std::endl;

    b1.signForm(*f1);
    b1.execForm(*f1);

    f4 = i1.makeForm("TEST21344567", "loler");

    return (0);
}