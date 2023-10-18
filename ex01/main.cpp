#include "iter.hpp"

const std::string&	printer(std::string& str)
{
	std::cout << str << std::endl;
	return (str);
}

int main( void )
{
	std::string arr[] = {"a", "b", "c"};

	iter(arr, 3, printer);
}
