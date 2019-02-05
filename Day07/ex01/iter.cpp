#include <iostream>
#include <string>

template <typename T>
void	iter(T const *arr, int num, void (*fun)(T const &))
{
	int	i = 0;
	while (i < num)
	{
		(*fun)(arr[i]);
		i++;
	}
}

template <typename T>
void	print_arr(T const & name)
{
	std::cout << name << std::endl;
}

int main()
{
	std::string keker[] = {"lol", "kek", "cheburek"};
	int	nums[] = {1,2,3,4,5,6,7,8,9,0};

	iter(keker, 3, print_arr);
	std::cout << "-----------" << std::endl;
	iter(nums, 10, print_arr);
}