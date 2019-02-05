#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat(void);
		Bureaucrat& operator=(Bureaucrat const &rhs);

		class	GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				GradeTooLowException(const GradeTooLowException &src);

				virtual ~GradeTooLowException(void) throw();

				GradeTooLowException&	operator=(const GradeTooLowException &rhs);

				virtual const char	*what() const throw();
		};

		class	GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				GradeTooHighException(const GradeTooHighException &src);
				virtual ~GradeTooHighException(void) throw();

				GradeTooHighException&	operator=(const GradeTooHighException &rhs);

				virtual const char	*what() const throw();
		};

		std::string	getName(void);
		int			getGrade(void);
		void		setName(std::string name);
		void		setGrade(int grade);

		void		operator+=(int i);
		void		operator-=(int i);

	private:
		std::string _name;
		int			_grade;
};

std::ostream                    &operator<< (std::ostream &out, Bureaucrat &rhs);

#endif