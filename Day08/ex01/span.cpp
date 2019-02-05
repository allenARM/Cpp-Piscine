#include "span.hpp"

Span::Span(void){}

Span::Span(unsigned int num)
{
	this->_num.reserve(num);
}

Span::Span(Span const &src)
{
	*this = src;
}

Span::~Span(void){}

Span& Span::operator=(Span const &rhs)
{
	if (this != &rhs)
		this->_num = rhs._num;
	return (*this);
}

void			Span::addNumber(unsigned int const num)
{
	if (this->_num.size() >= this->_num.capacity())
		throw std::logic_error("Not enough space");
	else
		this->_num.push_back(num);
}

unsigned int	Span::shortestSpan(void)
{
	std::vector<int>	tmp = this->_num;

	std::sort(tmp.begin(), tmp.end());
	std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin() - 1);
	return (tmp[std::distance(tmp.begin(), std::min_element(tmp.begin(), tmp.end()))]);
}

unsigned int	Span::longestSpan(void)
{
	std::vector<int>::iterator	min = std::min_element(this->_num.begin(), this->_num.end());
	std::vector<int>::iterator	max = std::max_element(this->_num.begin(), this->_num.end());

	return (this->_num[std::distance(this->_num.begin(), max)] - this->_num[std::distance(this->_num.begin(), min)]);
}