#include <iostream>

struct Data
{
	std::string	s1;
	int			n;
	std::string	s2;
};

void	*serialize(void)
{
	Data	*data = new Data;
	char	randomer[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int		i = 0;

	while (i < 8)
	{
		data->s1 += randomer[rand() % 62];
		i++;
	}
	data->n = rand();
	i = 0;
	while (i < 8)
	{
		data->s2 += randomer[rand() % 62];
		i++;
	}
	return (data);
}

Data	*deserialize(void *raw)
{
	Data	*data = reinterpret_cast <Data*> (raw);
	return (data);
}

int main()
{
	Data	*data;

	data = deserialize(serialize());

	std::cout << "String-1: " << data->s1 << std::endl;
	std::cout << "Number: " << data->n << std::endl;
	std::cout << "String-2: " << data->s2 << std::endl; 
	return (0);
}