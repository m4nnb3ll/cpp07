#pragma once

#include <iostream>

template<typename T, typename T_return>
void	iter(T *arr_address, int size , T_return(*f)(T& arr))
{
	for (int i = 0; i < size; i++)
		f(arr_address[i]);
}

template<typename T, typename T_return>
void	iter(T *arr_address, int size , T_return(*f)(const T& arr))
{
	for (int i = 0; i < size; i++)
		f(arr_address[i]);
}
