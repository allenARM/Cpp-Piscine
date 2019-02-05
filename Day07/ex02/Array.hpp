#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>


template <typename T>
class Array
{
	public:
		Array(void)
		{
			this->array = 0;
			this->n = 0;
		}
		Array(unsigned int n)
		{
			this->array = new T[n];
		}
		Array<T> (Array<T> const &rhs)
		{
			unsigned int i = 0;
			this->n = rhs.n;
			this->array = new T[rhs.n];
			while (i < this->n)
			{
				this->array[i] = rhs.array[i];
				i++;
			}
		}
		Array<T>	operator=(Array<T> const &rhs)
		{
			unsigned int i = 0;
			this->n = rhs.n;
			this->array = new T[rhs.n];
			while (i < this->n)
			{
				this->array[i] = rhs.array[i];
				i++;
			}
			return (*this);
		}
		T	&operator[](unsigned int n) const
		{
			if (n >= this->n)
				throw std::exception();
			return (this->array[n]);
		}

	private:
		T 				*array;
		unsigned int	n;


};

#endif