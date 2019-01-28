#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *str1 = &str;
	std::string	&str2 = str;

	std::cout << "This is variable: " << str << std::endl;
	std::cout << "This is pointer: " << *str1 << std::endl;
	std::cout << "This is reference: " << str2 << std::endl;
	return 0;
}
