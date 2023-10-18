#pragma once

#include "Array.hpp"

template<typename T>
Array<T>::Array() : m_size(0), m_Array(NULL) {};

template<typename T>
Array<T>::Array(unsigned int size)
	: m_size(size), m_Array(new T[size]) {};

template<typename T>
Array<T>::~Array() { delete[] m_Array; };

template<typename T>
Array<T>::Array(const Array<T>& origin)
: m_size(origin.m_size), m_Array(new T[origin.m_size])
{
    for (unsigned int i = 0; i < m_size; i++)
        m_Array[i] = origin.m_Array[i];
};

template<typename T>
Array<T>&	Array<T>::operator=(const Array<T>& origin)
{
	if (this != &origin)
	{
		this -> m_size = origin.m_size;
		if (this->m_Array)
			delete[] this->m_Array;
		this -> m_Array = new T[this -> m_size];
		for (unsigned int i = 0; i < m_size; i++)
			m_Array[i] = origin.m_Array[i];
	}
	return (*this);
};

template<typename T>
unsigned int Array<T>::size() { return m_size; };

template<typename T>
T&	Array<T>::operator[](unsigned int index)
{
	if (index >= m_size)
		throw(std::runtime_error("Error: out of bound index"));
	return (m_Array[index]);
}
