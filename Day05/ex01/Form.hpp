#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
class	Form
{
	public:
		Form(void);
		Form(std::string name, int gradeToSign, int gradetoExec);
		Form(Form const &src);
		~Form(void);

		std::string	getName(void);
		bool		getSigned(void);
		int			getGradeToSign(void);
		int			getGradeToExec(void);

		void		beSigned(Bureaucrat &b);
		Form&		operator=(Form const &rhs);
	
		class	GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				GradeTooHighException(const GradeTooHighException &src);

				virtual	~GradeTooHighException(void) throw();
				GradeTooHighException& operator=(const GradeTooHighException &rhs);

				virtual const char *what() const throw();	
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				GradeTooLowException(const GradeTooLowException &src);

				virtual ~GradeTooLowException(void) throw();
				GradeTooLowException& operator=(const GradeTooLowException &rhs);

				virtual const char *what() const throw();
		};
	private:
		std::string	_name;
		bool		_signed;
		int			_requiredGradeToSign;
		int			_requiredGradeToExecute;
};

std::ostream                  &operator<< (std::ostream &out, Form &rhs);

#endif