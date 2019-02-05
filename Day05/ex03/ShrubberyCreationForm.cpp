#include "ShrubberyCreationForm.hpp"

const int ShrubberyCreationForm::_sign = 145;
const int ShrubberyCreationForm::_exec = 137;

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	Form("Anonymous", "Shrubbery", \
	ShrubberyCreationForm::_sign, ShrubberyCreationForm::_exec){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form(target, "Shrubbery", \
	ShrubberyCreationForm::_sign, ShrubberyCreationForm::_exec){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) :
	Form("Anonymous", "Shrubbery", \
	ShrubberyCreationForm::_sign, ShrubberyCreationForm::_exec)
{
    *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){}

ShrubberyCreationForm
&ShrubberyCreationForm::operator= (const ShrubberyCreationForm &rhs)
{
    static_cast <void> (rhs);
    return (*this);
}

void
ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    std::ofstream  out_file;

    Form::execute(executor);
    out_file.open(getTarget() + "_shrubbery",
                 std::ofstream::out | std::ofstream::trunc);
    if (out_file.fail())
    {
        std::cerr << "Error openning the outfile" << std::endl;
    }
    out_file << "          *          " << std::endl;
    out_file << "         / \\         " << std::endl;
    out_file << "        /   \\        " << std::endl;
    out_file << "       /     \\       " << std::endl;
    out_file << "      /       \\      " << std::endl;
    out_file << "     /         \\     " << std::endl;
    out_file << "    /           \\    " << std::endl;
    out_file << "   /_____________\\   " << std::endl;
    out_file << "        |    |          " << std::endl;
    out_file << "        |    |         " << std::endl;
    out_file << "        |____|          " << std::endl;
    out_file.close();
    return ;
}