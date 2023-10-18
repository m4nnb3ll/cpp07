#pragma once

template<typename T>
class Array
{
public:
	Array();
	Array(unsigned int size);
	~Array();
	Array(const Array<T>& origin);
	Array<T>&		operator=(const Array<T>& origin);
	T&				operator[](unsigned int index);
	unsigned int	size();
private:
	unsigned int m_size;
	T* m_Array;
};

#include "Array.tpp"
