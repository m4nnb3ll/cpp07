#include <iostream>

template<typename T, typename T_return>

void	iter(T *arr_address, int size , T_return(*f)(T& arr))
{
	for (int i = 0; i < size; i++)
		f(arr_address[i]);
}

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

