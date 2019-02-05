#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <stdexcept>
# include <numeric>
# include <algorithm>

class Span
{
	public:
		Span(void);
		Span(unsigned int num);
		Span(Span const &src);
		~Span(void);

		Span& operator=(Span const &rhs);

		void				addNumber(unsigned int const num);
		unsigned int		shortestSpan(void);
		unsigned int		longestSpan(void);
	private:
		std::vector<int>	_num;
};

#endif