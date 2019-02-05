#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>

# include "Bureaucrat.hpp"

class Form
{
	public:

		class GradeTooHighException : public std::exception
		{
		public:
			GradeTooHighException(void);
			GradeTooHighException(const GradeTooHighException &src);

			virtual ~GradeTooHighException(void) throw();

			GradeTooHighException &operator= (const GradeTooHighException &rhs);

			virtual const char    *what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
		public:
			GradeTooLowException(void);
			GradeTooLowException(const GradeTooLowException &src);

			virtual ~GradeTooLowException(void) throw();

			GradeTooLowException  &operator= (const GradeTooLowException &rhs);

			virtual const char    *what(void) const throw();
		};

		class NotSignedException : public std::exception
		{
		public:
			NotSignedException(void);
			NotSignedException(const NotSignedException &src);

			virtual ~NotSignedException(void) throw();

			NotSignedException    &operator= (const NotSignedException &rhs);

			virtual const char    *what(void) const throw();
		};

		Form(void);
		Form(const Form &src);
		Form(std::string target, std::string name, int grade_to_sign, int grade_to_execute);

		virtual ~Form() = 0;

		Form                      &operator= (const Form &rhs);

		void                      beSigned(Bureaucrat &bureaucrat);

		void                      setTarget(std::string target);

		bool                      getSigned(void) const;
		int                       getGradeToSign(void) const;
		int                       getGradeToExecute(void) const;
		std::string               getName(void) const;
		std::string               getTarget(void) const;

		virtual void              execute(const Bureaucrat &executor) const = 0;

	private:
		bool					_signed;
		int						_grade_to_sign;
		int						_grade_to_execute;
		std::string				_name;
		std::string				_target;
};

std::ostream                  &operator<< (std::ostream &out, const Form &rhs);

#endif