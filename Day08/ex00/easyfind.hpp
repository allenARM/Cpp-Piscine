#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <list> 
# include <iterator> 

template <typename T>
void	easyfind(T &box, int num)
{
	typename	T::iterator	it;

	it = std::find(box.begin(), box.end(), num);
	if (it == box.end())
		throw (std::string("Value does not exists."));
	else
		std::cout << "Value exists." << std::endl;
}

#endif