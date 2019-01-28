#include "Pony.hpp"



void		ponyOnTheHeap(void)
{
	Pony *heap_pony = new Pony;

	std::cout << "Creating Pony on the HEAP..." << std::endl;
	heap_pony->setage();
	heap_pony->setname();
	heap_pony->setcolor();
	delete heap_pony;
}
void		ponyOnTheStack(void)
{
	Pony stack_pony;

	std::cout << "Creating Pony on the STACK..." << std::endl;
	stack_pony.setage();
	stack_pony.setname();
	stack_pony.setcolor();
}

int main()
{
	std::string	buf;
	while (1)
	{
		std::cout << "Where do you want to create a pony? Please enter \"HEAP\" or \"STACK\" or \"EXIT\": ";
		std::cin >> buf;
		if (buf == "HEAP")
			ponyOnTheHeap();
		else if (buf == "STACK")
			ponyOnTheStack();
		else if (buf == "EXIT")
			return (0);
		else
			std::cout << "wrong input" << std::endl;
	}
}