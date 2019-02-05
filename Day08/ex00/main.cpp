#include "easyfind.hpp"

void
testValue(int val)
{
    std::list<int>    lst;

    lst.push_back(20);
    lst.push_back(8);
    lst.push_back(15);
    lst.push_back(16);
    lst.push_back(23);
    lst.push_back(42);

    std::cout << val << " =\t";
    try
    {
        easyfind<std::list<int> > (lst, val);
    }
    catch (std::string str)
    {
        std::cout << str << std::endl;
    }
}

int
main(void)
{
    testValue(7);
    testValue(8);
    testValue(20);
    testValue(32);
    testValue(42);
    return (0);
}