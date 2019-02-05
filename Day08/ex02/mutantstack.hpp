#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <list>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>(void){}
		MutantStack(MutantStack const &src)
		{
			*this = src;
		}
		~MutantStack(void){}
		MutantStack&	operator=(MutantStack const &rhs)
		{
			if (this != &rhs)
				static_cast <void> (rhs);
			return (*this);
		}
		
		typedef	typename	std::stack<T>::container_type::iterator	iterator;

		iterator	begin() { return std::stack<T>::c.begin(); }
		iterator	end() { return std::stack<T>::c.end(); }

	private:
		std::list<T>		FictStack;
};

#endif